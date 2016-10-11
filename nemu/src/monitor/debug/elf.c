#include "common.h"
#include <stdlib.h>
#include <elf.h>
#include "monitor/set-elf-var.h"

char *exec_file = NULL;

Funcs all_elf_funcs[VAR_MAX];
int func_cnt;


static char *strtab = NULL;
static Elf32_Sym *symtab = NULL;
static int nr_symtab_entry;

void load_elf_tables(int argc, char *argv[]) {
	int ret;
	Assert(argc == 2, "run NEMU with format 'nemu [program]'");
	exec_file = argv[1];

	FILE *fp = fopen(exec_file, "rb");
	Assert(fp, "Can not open '%s'", exec_file);

	uint8_t buf[sizeof(Elf32_Ehdr)];
	ret = fread(buf, sizeof(Elf32_Ehdr), 1, fp);
	assert(ret == 1);

	/* The first several bytes contain the ELF header. */
	Elf32_Ehdr *elf = (void *)buf;
	char magic[] = {ELFMAG0, ELFMAG1, ELFMAG2, ELFMAG3};

	/* Check ELF header */
	assert(memcmp(elf->e_ident, magic, 4) == 0);		// magic number
	assert(elf->e_ident[EI_CLASS] == ELFCLASS32);		// 32-bit architecture
	assert(elf->e_ident[EI_DATA] == ELFDATA2LSB);		// littel-endian
	assert(elf->e_ident[EI_VERSION] == EV_CURRENT);		// current version
	assert(elf->e_ident[EI_OSABI] == ELFOSABI_SYSV || 	// UNIX System V ABI
			elf->e_ident[EI_OSABI] == ELFOSABI_LINUX); 	// UNIX - GNU
	assert(elf->e_ident[EI_ABIVERSION] == 0);			// should be 0
	assert(elf->e_type == ET_EXEC);						// executable file
	assert(elf->e_machine == EM_386);					// Intel 80386 architecture
	assert(elf->e_version == EV_CURRENT);				// current version


	/* Load symbol table and string table for future use */

	/* Load section header table */
	uint32_t sh_size = elf->e_shentsize * elf->e_shnum;
	Elf32_Shdr *sh = malloc(sh_size);
	fseek(fp, elf->e_shoff, SEEK_SET);
	ret = fread(sh, sh_size, 1, fp);
	assert(ret == 1);

	/* Load section header string table */
	char *shstrtab = malloc(sh[elf->e_shstrndx].sh_size);
	fseek(fp, sh[elf->e_shstrndx].sh_offset, SEEK_SET);
	ret = fread(shstrtab, sh[elf->e_shstrndx].sh_size, 1, fp);
	assert(ret == 1);

	int i;
	for(i = 0; i < elf->e_shnum; i ++) {
		if(sh[i].sh_type == SHT_SYMTAB &&
				strcmp(shstrtab + sh[i].sh_name, ".symtab") == 0) {
			/* Load symbol table from exec_file */
			symtab = malloc(sh[i].sh_size);
			fseek(fp, sh[i].sh_offset, SEEK_SET);
			ret = fread(symtab, sh[i].sh_size, 1, fp);
			assert(ret == 1);
			nr_symtab_entry = sh[i].sh_size / sizeof(symtab[0]);
		}
		else if(sh[i].sh_type == SHT_STRTAB &&
				strcmp(shstrtab + sh[i].sh_name, ".strtab") == 0) {
			/* Load string table from exec_file */
			strtab = malloc(sh[i].sh_size);
			fseek(fp, sh[i].sh_offset, SEEK_SET);
			ret = fread(strtab, sh[i].sh_size, 1, fp);
			assert(ret == 1);
		}
	}

	free(sh);
	free(shstrtab);

	assert(strtab != NULL && symtab != NULL);

	//for (i=0;strtab[i]!=NULL;++i)
	//{
	//	printf("%s\n", strtab);
	//}
	/*for (i=0;i!=nr_symtab_entry;++i)
	{
		printf("name: %s\n", symtab[i].st_name + strtab);
		printf("st_name: %x\n", symtab[i].st_name);
		printf("st_value: %x\n", (unsigned)symtab[i].st_value);
		printf("st_size: %x\n", symtab[i].st_size);
		printf("st_info: %hhx\n", symtab[i].st_info);
		printf("st_other: %hhx\n", symtab[i].st_other);
		printf("st_shndx: %hx\n\n", symtab[i].st_shndx);

	}*/
	/*printf("%d\n", nr_symtab_entry);*/

	fclose(fp);
}

int init_var() {
	int i=0;
	var_cnt=0;
	for (i=0;i<nr_symtab_entry;++i) {
		if ((symtab[i].st_info & 0xf) == STT_OBJECT) {
			Assert(var_cnt<VAR_MAX,"Resize VAR_MAX!\n");
			if (symtab[i].st_name!=0){
				strcpy(var[var_cnt].str, symtab[i].st_name + strtab);
			}
			else {
				strcpy(var[var_cnt].str, NO_NAME);
			}
			var[var_cnt].key=(int)symtab[i].st_value;
			++var_cnt;
		}
		else if ((symtab[i].st_info & 0xf) == STT_FUNC) {
			Assert(func_cnt<VAR_MAX,"Too many funcs, Resize VAR_MAX!\n");
			if (symtab[i].st_name!=0){
				strcpy(all_elf_funcs[func_cnt].str, symtab[i].st_name + strtab);
			}
			else {
				strcpy(all_elf_funcs[func_cnt].str, NO_NAME);
			}
			all_elf_funcs[func_cnt].start=(int)symtab[i].st_value;
			all_elf_funcs[func_cnt].end=(int)symtab[i].st_value + (int)symtab[i].st_size;
			++func_cnt;
			//printf("%d\n", func_cnt);
		}
	}
	return 0;
}

int sort_funcs() {
	int i,j;
	for (i=0; i<func_cnt-1; ++i) {
		int min=all_elf_funcs[i].start;
		int min_index=i;
		for (j=i+1; j<func_cnt; ++j) {
			if (min > all_elf_funcs[j].start) {
				min = all_elf_funcs[j].start;
				min_index = j;
			}
		}
		if (min_index!=i) {
			Funcs tmp=all_elf_funcs[min_index];
			all_elf_funcs[min_index]=all_elf_funcs[i];
			all_elf_funcs[i]=tmp;
		}
	}
	for (i=0;i<func_cnt;++i) {
		printf("%-12s\t0x%x\t0x%x\n",all_elf_funcs[i].str, all_elf_funcs[i].start, all_elf_funcs[i].end);
	}
	return 0;
}

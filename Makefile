# count lines #

COUNT := \
			ICS="@{HOME}/ics2016"; \
			CUR_CWD=@(pwd); \
			cd @{ICS}/nemu; \
			if [ @? -eq 0 ]; then  \
			    CUR_BRANCH=@(git branch | grep %*% | cut -d% % -f2); \
			    CUR_LINE=@(find . -type f -name *.[ch] -print0 | xargs -0 cat | tr -s %\\n% | wc -l); \
			    git checkout master >/dev/null; \
			    MASTER_LINE=@(find . -type f -name *.[ch] -print0 | xargs -0 cat | tr -s %\\n% | wc -l); \
			    git checkout @{CUR_BRANCH} >/dev/null; \
			    /bin/echo -e "Lines of master:    \\t@{MASTER_LINE}"; \
			    /bin/echo -e "Lines of @{CUR_BRANCH}   :    \\t@{CUR_LINE}"; \
			    /bin/echo -e "I have coded   :    \\t@(expr @{CUR_LINE} - @{MASTER_LINE})"; \
			    cd @{CUR_CWD}; \
			fi

#####

##### global settings #####

.PHONY: nemu entry testcase kernel run gdb test submit clean

CC := gcc
LD := ld
CFLAGS := -MMD -Wall -Werror -c

LIB_COMMON_DIR := lib-common
LIBC_INC_DIR := $(LIB_COMMON_DIR)/uclibc/include
LIBC_LIB_DIR := $(LIB_COMMON_DIR)/uclibc/lib
LIBC := $(LIBC_LIB_DIR)/libc.a
#FLOAT := obj/$(LIB_COMMON_DIR)/FLOAT/FLOAT.a

include config/Makefile.git
include config/Makefile.build

all: nemu


##### rules for building the project #####

include nemu/Makefile.part
include testcase/Makefile.part
include lib-common/FLOAT/Makefile.part
include kernel/Makefile.part
include game/Makefile.part

nemu: $(nemu_BIN)
testcase: $(testcase_BIN)
kernel: $(kernel_BIN)
game: $(game_BIN)


##### rules for cleaning the project #####

clean-nemu:
	-rm -rf obj/nemu 2> /dev/null

clean-testcase:
	-rm -rf obj/testcase 2> /dev/null

clean-kernel:
	-rm -rf obj/kernel 2> /dev/null

clean-game:
	-rm -rf obj/game 2> /dev/null

clean: clean-cpp
	-rm -rf obj 2> /dev/null
	-rm -f *log.txt entry $(FLOAT) 2> /dev/null


##### some convinient rules #####

USERPROG := obj/testcase/mov
ENTRY := $(USERPROG)

entry: $(ENTRY)
	objcopy -S -O binary $(ENTRY) entry

run: $(nemu_BIN) $(USERPROG) entry
	$(call git_commit, "run")
	$(nemu_BIN) $(USERPROG)

gdb: $(nemu_BIN) $(USERPROG) entry
	$(call git_commit, "gdb")
	gdb -s $(nemu_BIN) --args $(nemu_BIN) $(USERPROG)

test: $(nemu_BIN) $(testcase_BIN) entry
	$(call git_commit, "test")
	bash test.sh $(testcase_BIN)
count: 
	$(call git_commit, "count lines")
	@echo '${COUNT}' | tr '@%' '\044\047' | sh
submit: clean
	cd .. && tar cvj $(shell pwd | grep -o '[^/]*$$') > $(STU_ID).tar.bz2

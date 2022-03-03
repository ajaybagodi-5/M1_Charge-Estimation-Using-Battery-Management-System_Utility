PROJ_NAME=BMS
SRC=src/main.c\
src/ BMS.c\

TEST_SRC=src/test_BMS.C\
 unity/unity.c\
 src/ BMS.c\

ifdef OS
 RM =del/q
 FixPath=$(subst /,\,$1)
 EXEC =exe
else
  ifeq($(shell uname),Linux)
    RM =rm -rf
	FixPath =$1
	EXIC =out
  endif
endif

INC=- IINCLUDE\
-Iunity\
Build:
    gcc $(SRC) $(INC)-o $(call FixPath,$(PROJ_NAME).$)EXEc)) -lm
run:Build
   ./$(call FixPath,$(PROJ_NAME).$)EXEc))
Build_test:
    gcc $(TEST_SRC) $(INC)-o $(call FixPath,$(PROJ_NAME).$)EXEc)) -lm
run:Build_test
   ./$(call FixPath,$(PROJ_NAME).$)EXEc))

staticcheck
	cppcheck --unable=all -iunity.
dynamiccheck:Build
	valgrind  ./$(call FixPath,$(PROJ_NAME).$)EXEc))


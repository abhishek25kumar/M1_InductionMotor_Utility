PROJ_NAME= motor
SRC= motor.c



ifdef OS
  RM = del / q
  FixPath = $(subst /, \,$1)
  EXEC = exe 
else
  ifeq ($(shell uname), Linux)
   RM = rm - rf
   FixPath = $1
   EXEC = out
  endif
endif

Build : $(SRC) 
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck : 
	cppcheck --enable=all -iunity .

dynamic_analysis : Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
	
runTest:
	@./*_test

clear:
	@rm -rf *.o *.a *_test

fmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

cFmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

Function.o:
	gcc -c Function.c -o Function.o

Function.a: Function.o
	ar rcs Function.a Function.o

Tests.o:
	gcc -c Tests.c -o Tests.o

Program_test: Tests.o Function.a
	gcc -static -o Program_test Tests.o Function.a

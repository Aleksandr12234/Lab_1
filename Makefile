runTest:
	@./*_test

clear:
	@rm -rf *.o *.a *_test

fmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

cFmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

stack.o:
	@gcc -c stack.c -o stack.o

stack.a: stack.o
	@ar rcs stack.a stack.o

ex7_test.o:
	@gcc -c ex7_test.c -o ex7_test.o

ex7_test: ex7_test.o stack.a
	@gcc -static -o ex7_test ex7_test.o stack.a

runTest:
	@./*_test

clear:
	@rm -rf *.o *.a *_test

fmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

cFmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

stek.o:
	@gcc -c stek.c -o stek.o

stek.a: stek.o
	@ar rcs stek.a stek.o

ex7_test.o:
	@gcc -c ex7_test.c -o add_test.o

ex7_test: ex7_test.o stek.a
	@gcc -static -o ex7_test add_test.o stek.a

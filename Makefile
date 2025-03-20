runTest:
	@./*_test

clear:
	@rm -rf *.o *.a *_test

fmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

cFmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

find_roots.o:
	gcc -c find_roots.c -o find_roots.o

find_roots.a: find_roots.o
	ar rcs find_roots.a find_roots.o

test_find_roots.o:
	gcc -c test_find_roots.c -o test_find_roots.o

test_find_roots: test_find_roots.o find_roots.a 
	gcc -static -o program_test test_find_roots.o find_roots.a -lm

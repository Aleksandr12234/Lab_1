runTest:
	@./*_test

clear:
	@rm -rf *.o *.a *_test

fmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"`

cFmt:
	@clang-format -style=LLVM -i `find -regex ".+\.[ch]"` --dry-run --Werror

integralCalculation.o:
	@gcc -c integralCalculation.c -o integralCalculation.o

integralCalculation.a: integralCalculation.o
	@ar rcs integralCalculation.a integralCalculation.o

ex5_test.o:
	@gcc -c ex5_test.c -o ex5_test.o

ex5_test: ex5_test.o integralCalculation.a
	@gcc -static -o ex5_test ex5_test.o integralCalculation.a

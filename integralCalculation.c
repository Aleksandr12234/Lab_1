#include <math.h>
#include <stdio.h>
#include <string.h>

double integralCalculation(double (*func)(double), double a, double b, int n) {
  double h = (b - a) / (n);
  double sum = 0.5 * (func(a) + func(b));

  for (int i = 1; i < n; i += 1) {
    sum += func(a + i * h);
  }
  return sum * h;
}

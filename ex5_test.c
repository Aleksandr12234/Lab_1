#include "integralCalculation.h"

double functionSqureX(double x) { return x * x; }
double quadEquation(double x) { return 2 * x * x + 4 * x + 10; }

void tests() {
  integralCalculation(functionSqureX, 1, 10, 8);
  integralCalculation(functionSqureX, -3, 2, 5);
  integralCalculation(quadEquation, 3, 7, 2);
  integralCalculation(quadEquation, 0, 5, 4);
}

int main() {
  tests();
  return 0;
}

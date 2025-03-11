#include "stek.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fullTest() {
  stek stack = CreateStek();
  if (IsEmpty(&stack))
    AddStekElements(&stack, 10);
  if (!IsEmpty(&stack))
    Pop(&stack);
}

int main() {
  fullTest();

  return 0;
}

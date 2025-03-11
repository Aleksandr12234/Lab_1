#include "stack.h"

void fullTest() {
  stack stack = createStack();
  if (isEmpty(&stack))
    addStackElements(&stack, 10);
  if (!isEmpty(&stack))
    pop(&stack);
}

int main() {
  fullTest();

  return 0;
}

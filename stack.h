#include <stdbool.h>

typedef struct {
  int *massive;
  int size;
} stack;

stack createStack();
bool isEmpty(stack *a);
void addStackElements(stack *a, int element);
int *pop(stack *a);

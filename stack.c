// void NULL;
#include "stack.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

stack createStack() {
  stack OUT;
  OUT.size = 0;
  OUT.massive = NULL;

  return OUT;
}

bool isEmpty(stack *a) { return (*a).size <= 0; }

void addStackElements(stack *a, int element) {
  int m[(*a).size];
  for (int i = 0; i < (*a).size; i++) {
    m[i] = (*a).massive[i];
  }

  (*a).size++;
  free((*a).massive);
  (*a).massive = NULL;
  (*a).massive = malloc(sizeof(int) * (*a).size);
  for (int i = 0; i < (*a).size - 1; i++) {
    (*a).massive[i] = m[i];
  }
  (*a).massive[(*a).size - 1] = element;
}

int *pop(stack *a) {
  if ((*a).size <= 0)
    return NULL;

  (*a).size--;
  int m[(*a).size];
  int *b = malloc(sizeof(int));
  b[0] = (*a).massive[(*a).size];
  for (int i = 0; i < (*a).size; i++) {
    m[i] = (*a).massive[i];
  }

  free((*a).massive);
  (*a).massive = NULL;
  (*a).massive = malloc(sizeof(int) * (*a).size);
  for (int i = 0; i < (*a).size; i++) {
    (*a).massive[i] = m[i];
  }

  return b;
}

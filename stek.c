// void NULL;
#include "stek.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

stek CreateStek() {
  stek OUT;
  OUT.size = 0;
  OUT.massive = NULL;

  return OUT;
}

bool IsEmpty(stek *a) {
  if ((*a).size <= 0)
    return true;
  return false;
}

int AddStekElements(stek *a, int element) {
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

  return 0;
}

int Pop(stek *a) {
  if ((*a).size <= 0)
    return 0;
  (*a).size--;
  int m[(*a).size];
  int b = (*a).massive[(*a).size];
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

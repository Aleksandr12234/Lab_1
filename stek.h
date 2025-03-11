#include <stdbool.h>

typedef struct {
  int *massive;
  int size;
} stek;

stek CreateStek();
bool IsEmpty(stek *a);
int AddStekElements(stek *a, int element);
int Pop(stek *a);

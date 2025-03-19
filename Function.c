#include "list.h"
#include <stdlib.h>

void Create_List(List *list, int beginning) {
  list->kol_elements = 0;
  list->emkost = beginning;
  list->data = (int *)malloc(beginning * sizeof(int));
}

void AddToBeginning(List *list, int v) {
  if (list->kol_elements < list->emkost) {
    for (int i = list->kol_elements; i > 0; i--) {
      list->data[i] = list->data[i - 1];
    }
    list->data[0] = v;
    list->kol_elements++;
  }
}

void AddToEnd(List *list, int v) {
  if (list->kol_elements < list->emkost) {
    list->data[list->kol_elements] = v;
    list->kol_elements++;
  }
}

void AddToMiddle(List *list, int v, int position) {
  if (list->kol_elements < list->emkost && position <= list->kol_elements) {
    for (int i = list->kol_elements; i > position; i--) {
      list->data[i] = list->data[i - 1];
    }
    list->data[position] = v;
    list->kol_elements++;
  }
}

void Delete(List *list, int position) {
  if (position >= 0 && position < list->kol_elements) {
    for (int i = position; i < list->kol_elements - 1; i++) {
      list->data[i] = list->data[i + 1];
    }
    list->kol_elements--;
  }
}

int Find(List *list, int position) { return list->data[position]; }

int Count(List *list) { return list->kol_elements; }

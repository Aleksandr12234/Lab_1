#include "list.h"

void FillWithTestValues(List *list) {
  AddToBeginning(list, 10);
  AddToEnd(list, 20);
  AddToEnd(list, 30);
  AddToMiddle(list, 15, 1);
  AddToBeginning(list, 5);
  Find(list, 1);
  Count(list);
  Delete(list, 1);
}

int main() {
  List list;

  Create_List(&list, 10);

  FillWithTestValues(&list);

  return 0;
}

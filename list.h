typedef struct List {
  int *data;
  int kol_elements;
  int emkost;
} List;

void Create_List(List *list, int beginning);
void AddToBeginning(List *list, int v);
void AddToEnd(List *list, int v);
void AddToMiddle(List *list, int v, int position);
void Delete(List *list, int position);
int Find(List *list, int position);
int Count(List *list);

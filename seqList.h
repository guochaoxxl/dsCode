#ifndef seqList_h
#define seqList_h

#define maxSize 100

typedef int DataType;

typedef struct _seq{
	DataType arr[maxSize];
	int arrSize;
} SeqList;

void initList(SeqList **List);
void insertList(SeqList *List, DataType data, int local);
void deleteList(SeqList *List, DataType data, int local);
int findList(SeqList List, DataType data);
void displayList(SeqList List);

#endif

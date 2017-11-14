#ifndef seqList_h
#define seqList_h

#include <stdio.h>
#define maxSize 100

typedef int DataType;

typedef struct _seq{
	DataType arr[maxSize];
	int arrSize;
} SeqList;

//initial List
void initList(SeqList *List);
//insert element
void insertList(SeqList *List, DataType data, int local);
//create List 
void creatList(SeqList *List);
void deleteList(SeqList *List, DataType *data, int local);
int findList(SeqList *List, DataType data);
void displayList(SeqList *List);

#endif

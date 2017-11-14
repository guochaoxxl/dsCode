#ifndef seqStack_h
#define seqStack_h

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#define initSize 100
#define increament 20

typedef int DataType;

typedef struct _node{
	DataType *arr;
	int top;
	int maxSize;
} Node;

void initStack(Node *ptrNode);
void push(Node *ptrNode, DataType data);
void pop(Node *ptrNode, DataType *data);
DataType getTop(Node *ptrNode);
bool stackEmpty(Node *ptrNode);
bool stackFull(Node *ptrNode);

#endif

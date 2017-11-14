#include "seqStack.h"

void initStack(Node *ptrNode){
	ptrNode->arr =(DataType *)malloc(sizeof(DataType) * initSize);
	if(NULL == ptrNode->arr){
		printf("malloc error!\n");
		return;
	}
	ptrNode->top = -1;
	ptrNode->maxSize = initSize;

	return;
}

void push(Node *ptrNode, DataType data){
	if(stackFull(ptrNode)){
		printf("stack full!\n");
		return;
	}
	ptrNode->top++;
	ptrNode->arr[ptrNode->top] = data;

	return;
}
void pop(Node *ptrNode, DataType *data){
	if(stackEmpty(ptrNode)){
		printf("stack empty!\n");
		return;
	}
	*data = ptrNode->arr[ptrNode->top];

	ptrNode->top--;

	return;
}

DataType getTop(Node *ptrNode){
	if(stackEmpty(ptrNode)){
		printf("stack empty!\n");
	}

	return ptrNode->arr[ptrNode->top];
}

bool stackEmpty(Node *ptrNode){
	return ptrNode->top == -1;
}

bool stackFull(Node *ptrNode){
	return ptrNode->top == initSize - 1;
}

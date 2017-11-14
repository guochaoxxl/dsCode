#include "seqStack.h"

int main(int argc, char **argv)
{
	Node *node = (Node *)malloc(sizeof(Node));
	initStack(node);
	if(stackEmpty(node)){
		printf("after init the stack is empty!\n");
	}
	push(node, 5);
	push(node, 8);
	push(node, 9);
	push(node, 11);
	if(stackEmpty(node)){
		printf("the stack is empty!\n");
	}
	DataType *data = (DataType *)malloc(sizeof(DataType));
	pop(node, data);
	printf("pop: %d\n", *data);
	pop(node, data);
	printf("pop: %d\n", *data);
	pop(node, data);
	printf("pop: %d\n", *data);
	pop(node, data);
	printf("pop: %d\n", *data);

	return 0;
}

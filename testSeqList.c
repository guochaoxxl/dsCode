#include "seqList.h"

int main(int argc, char **argv)
{
	SeqList List;
	initList(&List);
	creatList(&List);
	displayList(&List);
	DataType findData;
	printf("please input the find data: ");
	scanf("%d", &findData);
	printf("you find %d in list %d\n", findData, findList(&List, findData));
	displayList(&List);
	DataType delLocal;
	printf("please input the delte data: ");
	scanf("%d", &delLocal);
	DataType data;
	deleteList(&List, &data, delLocal);
	printf("you delete data is %d\n", data);
	displayList(&List);

	return 0;
}

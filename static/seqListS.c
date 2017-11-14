#include "seqList.h"

void initList(SeqList *List){
	//List = (SeqList *)malloc(sizeof(SeqList));
	List->arr[maxSize];
	List->arrSize = 0;

	return;
}

void insertList(SeqList *List, DataType data, int local){
//	*List = (SeqList *)malloc(sizeof(SeqList));
	if(local < 0 || local > List->arrSize - 1){
		printf("Error\n");
		return;
	}else{
		for(int i = List->arrSize - 1; i > local - 1; i--){
			List->arr[i] = List->arr[i - 1];
		}
		List->arr[local - 1] = data;
	}
	List->arrSize++;

	return;
}

void creatList(SeqList *List){
	int arrTmpSize;
	printf("please input the list size: \n");
	scanf("%d", &arrTmpSize);
	for(int i = 0; i < arrTmpSize; i++){
		printf("please %dth number: ", i + 1);
		scanf("%d", &List->arr[i]);
	}
	List->arrSize = arrTmpSize;

	return;
}
void deleteList(SeqList *List, DataType *data, int local){
	if(local < 0 || local > List->arrSize - 1){
		printf("Error\n");
		return;
	}else{
		*data = List->arr[local - 1];
		for(int i = local; i < List->arrSize -1; i++){
			List->arr[i - 1] = List->arr[i];
		}
	}
	List->arrSize--;

}
int findList(SeqList *List, DataType data){
	for(int i = 0; i < List->arrSize; i++){
		if(List->arr[i] == data){
			return i;
		}
	}

	return -1;
}

DataType findListLocal(SeqList *List, int local){
	if(local < 0 || local > List->arrSize){
		printf("Error\n");

		return -1000;
	}else{
		return List->arr[local - 1];
	}
}

void displayList(SeqList *List){
	printf("The list: ");
	for(int i = 0; i < List->arrSize; i++){
		printf("%d\t", List->arr[i]);
	}
	printf("\n");
}

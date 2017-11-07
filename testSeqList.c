#include "seqList.h"

int main(int argc, char **argv)
{
	SeqList *List;
	initList(&List);
	DataType inData1 = 3;
	DataType inData2 = 9;
	DataType inData3 = 11;
	DataType inData4 = 8;
	DataType inData5 = 14;
	DataType delData;
	DataType findData = 9;
	insertLlist(List, inData1, 0);
	insertLlist(List, inData2, 1);
	insertLlist(List, inData3, 2);
	insertLlist(List, inData4, 3);
	insertLlist(List, inData5, 4);
	displayList(List);

	return 0;
}

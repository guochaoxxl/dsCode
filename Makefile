testSeqList: testSeqList.o seqList.o
	gcc $^ -o $@
testSeqList.o:testSeqList.c
	gcc -c $< -o $@
seqList.o:seqList.c seqList.h
	gcc -c $< -o $@

.PHONY:clean
	rm *.o

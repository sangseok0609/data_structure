#include <stdio.h>
#include "ArrStack.h"

void StackInit(Stack *pstack) {
	pstack->TopIndex = -1;
}
int IsFull(Stack *pstack) {
	if (pstack->TopIndex == ARRLEN - 1)
		return TRUE;
	else
		return FALSE;
}
int IsEmpty(Stack *pstack) {
	if (pstack->TopIndex == -1)
		return TRUE;
	else
		return FALSE;
}
void SPush(Stack *pstack, Data data) {
	if (IsFull(pstack)) {
		printf("Stack is full.");
		exit(-1);
	}
	else {
		(pstack->TopIndex)++;
		pstack->arr[pstack->TopIndex] = data;
	}
}
Data SPop(Stack *pstack) {
	if (IsEmpty(pstack)) {
		printf("There is no data to pop.");
		exit(-1);
	}
	int rInd = pstack->TopIndex;
	Data rdata = pstack->arr[rInd];
	(pstack->TopIndex)--;
	return rdata;
}
Data SPeek(Stack *pstack) {
	if (IsEmpty(pstack)) {
		printf("There is no data to peek");
		exit(-1);
	}
	return pstack->arr[pstack->TopIndex];
}

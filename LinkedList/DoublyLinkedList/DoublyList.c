#include <stdio.h>
#include <stdlib.h>
#include "DoublyList.h"

//더미노드가 head와 tail에 각각 하나씩 존재하는 양방향 연결 리스트

void ListInit(List *plist) {
	plist->head = (Node *)malloc(sizeof(Node));
	plist->tail = (Node *)malloc(sizeof(Node));

	plist->head->prev = NULL;
	plist->head->next = plist->tail;

	plist->tail->prev = plist->head;
	plist->tail->next = NULL;

	plist->numOfData = 0;
}
void LInsert(List *plist, Data data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	newNode->prev = plist->tail->prev;
	newNode->prev->next = newNode;
	
	plist->tail->prev = newNode;
	newNode->next = plist->tail;

	(plist->numOfData)++;
}
int LFirst(List *plist, Data *pdata) {
	if (plist->head->next == plist->tail)
		return FALSE;

	plist->cur = plist->head->next;

	*pdata = plist->cur->data;
	return TRUE;
}
int LNext(List *plist, Data *pdata) {
	if (plist->cur->next == plist->tail)
		return FALSE;

	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}
int LPrev(List *plist, Data *pdata) {
	if (plist->cur->prev == plist->head)
		return FALSE;

	plist->cur = plist->cur->prev;

	*pdata = plist->cur->data;
	return TRUE;
}
Data LRemove(List *plist) {
	Node *rpos = plist->cur;
	Data rdata = rpos->data;

	rpos->prev->next = rpos->next;
	rpos->next->prev = rpos->prev;
	//cur의 위치 재조정
	plist->cur = plist->cur->prev;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}
int LCount(List *plist) {
	return plist->numOfData;
}
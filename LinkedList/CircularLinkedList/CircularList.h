#ifndef __CIRCULAR_LIST_H__
#define __CIRCULAR_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node {
	Data data;
	struct _node *next;
}Node;

typedef struct _clist {
	Node *tail;
	Node *before;
	Node *cur;
	int numOfData;
}CList;

typedef CList List;

void ListInit(List *plist);
void LInsert(List *plist, Data data);
int LFirst(List *plist, Data *data);
int LNext(List *plist, Data *data);
Data LRemove(List *plist);
int LCount(List *plist);

#endif
#ifndef __LIST_STACK_H__
#define __LIST_STACK_H__

#define TRUE 1;
#define FALSE 0;

typedef int Data;

typedef struct _node {
	Data data;
	struct _node *next;
}Node;

typedef struct _ListStack {
	Node *head;
}Stack;

void StackInit(Stack *pstack);
//스택을 초기화하는 함수
//스택이 생성되면 제일 먼저 호출 되어야함.
int IsEmpty(Stack *pstack);
//스택이 비어있는지 확인하는 함수
//비어있다면 TRUE, 아니라면 FALSE 반환
void SPush(Stack *pstack, Data data);
//스택에 데이터를 삽입하는 함수
//인자로 넘겨받은 데이터를 스택에 저장함
Data SPop(Stack *pstack);
//스택에 마지막으로 저장된 데이터를 반환하고, 삭제하는 함수
//스택에 데이터가 하나라도 존재해야함
Data SPeek(Stack *pstack);
//스택에 마지막으로 저장된 데이터를 반환하는 함수
//스택에 데이터가 하나라도 존재해야함

#endif
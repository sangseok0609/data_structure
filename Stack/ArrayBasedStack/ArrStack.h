#ifndef __ARR_STACK_H__
#define __ARR_STACK_H__

#define TRUE 1
#define FALSE 0
#define ARRLEN 100

typedef int Data;

typedef struct _arrStack {
	int arr[ARRLEN];
	int TopIndex;
}ArrStack;

typedef ArrStack Stack;

void StackInit(Stack *pstack);
//스택이 생성되면 처음으로 호출되는 함수
//스택의 초기화를 담당
int IsFull(Stack *pstack);
//스택이 꽉 찼는지 확인하는 함수
//스택이 꽉찼다면 TRUE, 아니라면 FALSE 반환
int IsEmpty(Stack *pstack);
//스택이 비어있는지 확인하는 함수
//스택이 비어있다면 TRUE, 아니라면 FALSE 반환
void SPush(Stack *pstack, Data data);
//데이터의 삽입을 담당하는 함수
//TopIndex에 1을 더함
Data SPop(Stack *pstack);
//마지막 데이터를 삭제
//삭제된 데이터를 반환
//스택이 비어있으면 안됨
Data Speek(Stack *pstack);
//마지막 데이터를 조회, 삭제는 하지 않음
//조회한 데이터를 반환
//스택이 비어있으면 안됨

#endif
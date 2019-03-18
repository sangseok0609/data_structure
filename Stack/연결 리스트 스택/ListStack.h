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
//������ �ʱ�ȭ�ϴ� �Լ�
//������ �����Ǹ� ���� ���� ȣ�� �Ǿ����.
int IsEmpty(Stack *pstack);
//������ ����ִ��� Ȯ���ϴ� �Լ�
//����ִٸ� TRUE, �ƴ϶�� FALSE ��ȯ
void SPush(Stack *pstack, Data data);
//���ÿ� �����͸� �����ϴ� �Լ�
//���ڷ� �Ѱܹ��� �����͸� ���ÿ� ������
Data SPop(Stack *pstack);
//���ÿ� ���������� ����� �����͸� ��ȯ�ϰ�, �����ϴ� �Լ�
//���ÿ� �����Ͱ� �ϳ��� �����ؾ���
Data SPeek(Stack *pstack);
//���ÿ� ���������� ����� �����͸� ��ȯ�ϴ� �Լ�
//���ÿ� �����Ͱ� �ϳ��� �����ؾ���

#endif
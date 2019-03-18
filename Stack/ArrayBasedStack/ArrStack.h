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
//������ �����Ǹ� ó������ ȣ��Ǵ� �Լ�
//������ �ʱ�ȭ�� ���
int IsFull(Stack *pstack);
//������ �� á���� Ȯ���ϴ� �Լ�
//������ ��á�ٸ� TRUE, �ƴ϶�� FALSE ��ȯ
int IsEmpty(Stack *pstack);
//������ ����ִ��� Ȯ���ϴ� �Լ�
//������ ����ִٸ� TRUE, �ƴ϶�� FALSE ��ȯ
void SPush(Stack *pstack, Data data);
//�������� ������ ����ϴ� �Լ�
//TopIndex�� 1�� ����
Data SPop(Stack *pstack);
//������ �����͸� ����
//������ �����͸� ��ȯ
//������ ��������� �ȵ�
Data Speek(Stack *pstack);
//������ �����͸� ��ȸ, ������ ���� ����
//��ȸ�� �����͸� ��ȯ
//������ ��������� �ȵ�

#endif
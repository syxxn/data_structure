#pragma once

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100
typedef int Data;
typedef struct _arrayStack {
	Data StackArr[STACK_LEN];
	int top;
}Stack;

void stackInit(Stack* pstack);//������ �ʱ�ȭ
int isEmpty(Stack* pstack); //������ ������� Ȯ��
void push(Stack* pstack, Data data); //������ push ����
Data pop(Stack* pstack); //������ pop ����
Data peek(Stack* pstack); //������ peek ����

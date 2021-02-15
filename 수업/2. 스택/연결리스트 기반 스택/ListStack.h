#pragma once
#define TRUE 1
#define FALSE 0
//#define STACK_LEN 100
typedef char Data;

typedef struct _arrayStack {
	Data data;
	struct _node* next;
}Node;

typedef struct _listStack {
	Node* top;
}Stack;


void stackInit(Stack* pstack);//������ �ʱ�ȭ
int isEmpty(Stack* pstack); //������ ������� Ȯ��
void push(Stack* pstack, Data data); //������ push ����
Data pop(Stack* pstack); //������ pop ����
Data peek(Stack* pstack); //������ peek ����
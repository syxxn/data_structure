#include <stdio.h>
#include <stdlib.h>
#include "ListStack.h"


void stackInit(Stack* pstack) {//������ �ʱ�ȭ
	pstack->top = NULL;
	
}
int isEmpty(Stack* pstack) {//������ ������� Ȯ��
	if (pstack->top == NULL) {
		return TRUE;
	}
	else return FALSE;
}
void push(Stack* pstack, Data data) { //������ push ����
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = pstack->top;
	pstack->top = newNode;

}
Data pop(Stack* pstack) { //������ pop ����
	Data rdata;
	Node* rnode;

	if (isEmpty(pstack)) {
		exit(1);
	}

	rdata = pstack->top->data;
	rnode = pstack->top;
	pstack->top = pstack->top->next;
	free(rnode);
	return rdata;
}
Data peek(Stack* pstack) { //������ peek ���� //���� ���� �ִ� ������
	if (isEmpty(pstack)) {
		exit(1);
	}
	return pstack->top->data;
}
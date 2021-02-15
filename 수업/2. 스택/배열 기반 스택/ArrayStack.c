#include <stdio.h>
#include <stdlib.h>
#include "ArrayStack.h"

void stackInit(Stack* pstack) {//������ �ʱ�ȭ
	pstack->top = -1;
}
int isEmpty(Stack* pstack) {//������ ������� Ȯ��
	if (pstack->top == -1) {
		return TRUE;
	}
	else return FALSE;
}
void push(Stack* pstack, Data data) { //������ push ����
	pstack->top++;
	pstack->StackArr[pstack->top] = data;
	
}
Data pop(Stack* pstack) { //������ pop ����
	if (isEmpty(pstack)) {
		exit(1);
	}
	return pstack->StackArr[pstack->top--];
}
Data peek(Stack* pstack) { //������ peek ����
	if (isEmpty(pstack)) {
		exit(1);
	}
	return pstack->StackArr[pstack->top];
}
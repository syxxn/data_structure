#include <stdio.h>
#include <stdlib.h>
#include "ListStack.h"


void stackInit(Stack* pstack) {//스택이 초기화
	pstack->top = NULL;
	
}
int isEmpty(Stack* pstack) {//스택이 비었는지 확인
	if (pstack->top == NULL) {
		return TRUE;
	}
	else return FALSE;
}
void push(Stack* pstack, Data data) { //스택의 push 연산
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = pstack->top;
	pstack->top = newNode;

}
Data pop(Stack* pstack) { //스택의 pop 연산
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
Data peek(Stack* pstack) { //스택의 peek 연산 //제일 위에 있는 데이터
	if (isEmpty(pstack)) {
		exit(1);
	}
	return pstack->top->data;
}
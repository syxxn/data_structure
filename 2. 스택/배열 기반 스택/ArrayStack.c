#include <stdio.h>
#include <stdlib.h>
#include "ArrayStack.h"

void stackInit(Stack* pstack) {//스택이 초기화
	pstack->top = -1;
}
int isEmpty(Stack* pstack) {//스택이 비었는지 확인
	if (pstack->top == -1) {
		return TRUE;
	}
	else return FALSE;
}
void push(Stack* pstack, Data data) { //스택의 push 연산
	pstack->top++;
	pstack->StackArr[pstack->top] = data;
	
}
Data pop(Stack* pstack) { //스택의 pop 연산
	if (isEmpty(pstack)) {
		exit(1);
	}
	return pstack->StackArr[pstack->top--];
}
Data peek(Stack* pstack) { //스택의 peek 연산
	if (isEmpty(pstack)) {
		exit(1);
	}
	return pstack->StackArr[pstack->top];
}
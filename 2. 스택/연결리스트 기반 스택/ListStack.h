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


void stackInit(Stack* pstack);//스택이 초기화
int isEmpty(Stack* pstack); //스택이 비었는지 확인
void push(Stack* pstack, Data data); //스택의 push 연산
Data pop(Stack* pstack); //스택의 pop 연산
Data peek(Stack* pstack); //스택의 peek 연산
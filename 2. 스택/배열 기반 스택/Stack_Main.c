#include <stdio.h>
#include "ArrayStack.h"

int main() {
	Data data;
	Stack stack;
	stackInit(&stack);

	// 데이터 넣기 
	scanf("%d", &data);
	while (data >= 0) {
		push(&stack, data);
		scanf("%d", &data);
	}

	// 데이터 꺼내기
	while (!isEmpty(&stack))
		printf("%d", pop(&stack));

	return 0;
}
#include <stdio.h>
#include "ListStack.h"

int main() {
	Data data;
	Stack stack;
	stackInit(&stack);

	// ������ �ֱ� 
	scanf("%d", &data);
	while (data >= 0) {
		push(&stack, data);
		scanf("%d", &data);
	}

	// ������ ������
	while (!isEmpty(&stack))
		printf("%d", pop(&stack));

	return 0;
}
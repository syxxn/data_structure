#include <stdio.h>
//#include "ArrayStack.h"
#include "ListStack.h"

int isMatch(Data source, Data dest) {
	if ((source == '(' && dest == ')')
		|| (source == '{' && dest == '}')
		|| (source == '[' && dest == ']')) {
		return TRUE;
	}
	return FALSE;
}

int main() {

	Stack stack;
	Data exp[100], *ch;
	stackInit(&stack);
	fgets(exp, 100, stdin);
	ch = exp;
	while (*ch != '\0') {
		/*switch (*ch) {
		case '(':
		case '{':
		case '[':
			push(&stack, *ch);
			break;
		case ')':
		case '}':
		case ']':
			if (isEmpty(&stack)) {
				printf("fail\n");
				exit(1);
			}if (!isMatch(pop(&stack), *ch)) {
				printf("fail\n");
				exit(1);
			}
			printf("%c와 %c를 지웁니다", peek(&stack), *ch);
			pop(&stack);
		}*/
		if (*ch == '(' || *ch == '{' || *ch == '[') {
			push(&stack, *ch);
		}
			
		if (!isEmpty(&stack) && isMatch(stack.top->data,*ch)) {
			if (isEmpty(&stack)) {
				printf("fail\n");
			}
			if (!isMatch(peek(&stack), *ch)) {
				printf("fail\n");
			}
			printf("%c와 %c를 지웁니다\n", stack.top->data, *ch);
			pop(&stack);
		}
		ch++;
	}
	if (isEmpty(&stack))
		printf("Success!\n");
	else
		printf("FAIL!\n");
	/*Data data;
	//Stack stack;
	Node stack;
	Stack top;
	stackInit(&stack); //스택 초기화
	//데이터 넣기
	scanf("%d", &data);
	while (data >= 0) {
		push(&stack, data);
		scanf("%d", &data);
	}
	//데이터를 pop으로 꺼내서 출력
	while (!isEmpty(&stack)) {
		printf("%d\n",pop(&stack));
	}*/
	return 0;
}

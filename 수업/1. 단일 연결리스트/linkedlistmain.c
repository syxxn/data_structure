#include "header.h"

int main() {
	Linsert(head, 1);
	Linsert(head, 2);
	printf("%d %d\n", head->data, head->next->data);

	Linsert(head->next, 3);
	printf("%d\n", head->next->next->data);
	Linsert(head->next->next, 4);
	printf("%d\n", head->next->next->next->data);

	Ldelete(head, head->next);

	return 0;
}


#include "header.h"

Nodeptr head = NULL;

void Linsert(Nodeptr ptr, int data) {
	Nodeptr newNode = (Nodeptr)malloc(sizeof(Node));
	newNode->data = data;
	if (!head) {
		newNode->next = NULL;
		head = newNode;
	}
	else {
		newNode->next = ptr->next;
		ptr->next = newNode;
	}
}

void Ldelete(Nodeptr tra, Nodeptr del) { //tra는 지울 node의 앞 node, del는 지울 node

	if (!head) {
		printf("돌아가\n");
	}
	else {
		//Nodeptr tmp = del;
		if (tra) {
			tra->next = del->next;
		}
		else {
			head = del->next;
		}
		free(del);
	}
}
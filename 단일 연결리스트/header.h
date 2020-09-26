#pragma once

#include <stdlib.h>
#include <stdio.h>

typedef struct node* Nodeptr;

typedef struct node {
	int data;
	Nodeptr next;
}Node;

Nodeptr head;

void Linsert(Nodeptr ptr, int data);
void Ldelete(Nodeptr tra, Nodeptr del);

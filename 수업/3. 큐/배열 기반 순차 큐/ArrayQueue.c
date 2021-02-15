#include <stdio.h>
#include <stdlib.h>
#include "ArrayQueue.h"

// ť��  �ʱ�ȭ 
void queueInit(Queue* q) {
	q->front = -1;
	q->rear = -1;
}

// ť�� ������� Ȯ�� 
int isEmpty(Queue* q) {
	if (q->front == q->rear) {
		return TRUE;
	}
	else FALSE;
}

// ť�� �� á���� Ȯ�� 
int isFull(Queue* q) {
	if (q->rear == MAX_QUEUE_SIZE - 1) {
		return TRUE;
	}
	else FALSE;

}

// ť�� ���� ����
void enQueue(Queue* q, Data data) {
		q->qArr[++q->rear] = data;
}

// ť���� ���� ���� 
Data deQueue(Queue* q) {
		return q->qArr[++q->front];
}

// ť��  peek���� (ù��° �ڷḦ �����´�.) 
Data peek(Queue* q) {
	if (!isEmpty) {
		return q->qArr[q->front];
	}
}

// ť  ����ϱ�
void printQueue(Queue* q) {
	int i;

	for (i = 0; i <= MAX_QUEUE_SIZE; i++) {
		if ((i <= q->front) || (i > q->rear))
			printf("   |");
		else
			printf(" %d |", q->qArr[i]);
	}

	printf("\n");
}

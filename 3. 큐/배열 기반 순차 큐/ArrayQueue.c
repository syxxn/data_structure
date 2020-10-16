#include <stdio.h>
#include <stdlib.h>
#include "ArrayQueue.h"

// 큐의  초기화 
void queueInit(Queue* q) {
	q->front = -1;
	q->rear = -1;
}

// 큐가 비었는지 확인 
int isEmpty(Queue* q) {
	if (q->front == q->rear) {
		return TRUE;
	}
	else FALSE;
}

// 큐가 꽉 찼는지 확인 
int isFull(Queue* q) {
	if (q->rear == MAX_QUEUE_SIZE - 1) {
		return TRUE;
	}
	else FALSE;

}

// 큐에 삽입 연산
void enQueue(Queue* q, Data data) {
		q->qArr[++q->rear] = data;
}

// 큐에서 삭제 연산 
Data deQueue(Queue* q) {
		return q->qArr[++q->front];
}

// 큐의  peek연산 (첫번째 자료를 가져온다.) 
Data peek(Queue* q) {
	if (!isEmpty) {
		return q->qArr[q->front];
	}
}

// 큐  출력하기
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

#define TRUE 1
#define FALSE 0
#define MAX_QUEUE_SIZE 10

typedef int Data;

typedef struct _arrayQueue {
	Data qArr[MAX_QUEUE_SIZE];
	int front;
	int rear;
} Queue;

// 큐의  초기화 
void queueInit(Queue* q);

// 스택이 비었는지 확인 
int isEmpty(Queue* q);

// 스택이 꽉 찼는지 확인 
int isFull(Queue* q);

// 큐에 삽입 연산
void enQueue(Queue* q, Data data);

// 큐에서 삭제 연산 
Data deQueue(Queue* q);

// 큐 peek연산
Data peek(Queue* q);

// 큐 출력하기
void printQueue(Queue* q);
#define TRUE 1
#define FALSE 0
#define MAX_QUEUE_SIZE 10

typedef int Data;

typedef struct _arrayQueue {
	Data qArr[MAX_QUEUE_SIZE];
	int front;
	int rear;
} Queue;

// ť��  �ʱ�ȭ 
void queueInit(Queue* q);

// ������ ������� Ȯ�� 
int isEmpty(Queue* q);

// ������ �� á���� Ȯ�� 
int isFull(Queue* q);

// ť�� ���� ����
void enQueue(Queue* q, Data data);

// ť���� ���� ���� 
Data deQueue(Queue* q);

// ť peek����
Data peek(Queue* q);

// ť ����ϱ�
void printQueue(Queue* q);
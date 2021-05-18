/*구조체 활용한 큐*/
#include <stdio.h>
#include <stdbool.h>

#define SIZE 6
typedef struct qnode
{
	int data;
	int rear, front;
}QNode;

int queue[SIZE];

void initQueue(QNode* pq)
{
	pq->data = 0;
	pq->front = 0;
	pq->rear = 0;
}

int isEmpty(QNode* pq)
{
	if (pq->front == pq->rear) return true;
	else return false;
}

int isFull(QNode* pq)
{
	if (pq->front == (pq->rear + 1) % SIZE)return true;
	else return false;
}

void enQueue(QNode* pq, int data)
{
	if (isFull(pq))
	{
		printf("Queue overflow!!\n");
		return;
	}
	else
	{
		queue[(pq->rear++) % SIZE] = data; //원형 큐 만들기
	}
}

int main()
{
	QNode* pq;
	initQueue(&pq);

	return 0;
}
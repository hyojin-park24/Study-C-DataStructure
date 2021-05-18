//���� �ڷ� ť �̿��� ���� ť
//front == (rear + 1) -> full
//rear == front -> empty 
// �� �ΰ� ���� ����� �߿�!
#include<stdio.h>
#include<stdbool.h>
#define SIZE 6

int isEmpty();
int isFull();
void enQueue(int);		//Q�� ����
int deQueue();			//Q���� ����(����)

/*���� ����*/
int rear = 0;			//�Ա�
int front = 0;			// �ⱸ

/*���� �ڷ� ���� ����*/
int queue[SIZE];

/*main�Լ�*/
int main()
{
	enQueue(10);
	enQueue(20);
	enQueue(30);
	printf("%d\n", deQueue()); //������ �� ���
	printf("%d\n", deQueue()); //������ �� ���
	printf("%d\n", deQueue()); //������ �� ���
	printf("%d\n", deQueue()); //underflow ���

	return 0;
}

/*�Լ� ����*/

//���� ����
int isEmpty()
{
	if (rear == front) return true;
	else return false;
}

// ��ȭ ����
//-> rear+1 ����� ���ǰ� ��ġ�� ������ �� �ϳ� ��������
int isFull()
{
	if (front == (rear + 1) % SIZE) return true;
	// �����ϴ� ���� index�� ��������� 
	// ����� �� �ִ� ���� 5���ε�
	// 6�̵Ǹ� 0����, 7�̵Ǹ� 1���� �̷��� ��������� 
	// => ������ ���� ���
	else return false;
}

//Q�� ������ ����
void enQueue(int data)
{
	if (isFull()) printf("Queue overflow!!!\n");
	else
	{
		rear = rear % SIZE;
		queue[rear] = data;
		rear++;
	}
}

//Q�� ������ ����
int deQueue()
{
	if (isEmpty())
	{
		printf("Queue underflow!! \n");
		exit(1);
	}
	else
	{
		return queue[front++ % SIZE];
	}
}
//���ñ����� ���� �ڷᱸ���� ǥ��
//������ ���ؼ� ���ͳ� �����ؼ� Ŭ��Ŭ�� ������ ã�ư��ٰ� �����ִ� â�� ������
//���� â�� ������ �� �ٸ� â�� ������ �� â�� ������ 
//ȭ���� �� �� �ٸ� ȭ���� ������ �� ��� ����!
#include<stdio.h>
#include<stdbool.h>

#define STACK_SZ    3
//#define TRUE        1   //TRUE,FALSE�� C���� stdbool.h���� ó������
//#define FALSE       2

//����Ȯ���� �켱 (Empty or Full)

int isEmpty();			// ���� üũ
int isFull();			// ��ȭ üũ

void push(int);			// ���ÿ� �Է�
int pop();				// ���ÿ��� ���
int peek();				//�� ���� ���� Ȯ�� peek();
						//�� ���� �ִ� ���� ��µ����� 
						//pop���� ����ϸ� �� �� ���� ���� �Ǳ� ������ 
						//���� Ȯ���� �ʿ䰡 ����
void printStack();

int stack[STACK_SZ];	// �迭 ũ�� 3 (������ ������)

int top = -1;			//���� ������ ��ġ (�ʱ�ȭ�� 0�� 1�� ��������� �Ϲ������� -1�� ����)
						//������ �Էµ� ������ ���� ���ڸ��� �ö� 
						// �׻� ������ �� ���� ����Ų��.
int main()
{
	push(10);
	push(11);
	push(12);

	pop();
	push(13);

	printStack();

	return 0;
}

int isEmpty()
{
	if (top <= -1)return true;	// �� �����̸� ������ ��������� �ǹ�(����)
	else return false;
}

int isFull()
{
	if (top >= STACK_SZ - 1)return true;
	else return false;
}

// ���ÿ� ����
void push(int data)					
{
	if (isFull())//���� ���ϸ� �� ��ü�� �����̱� ������
	{
		printf("STACK overflow!!\n");
		return;						// return�ϴ� ������? ���� ����� �����Ű�� �ʱ� ���ؼ�!
	}
	else
	{
		stack[++top] = data;		// top�� ++�������Ѽ� 0���� �������
	}
}

// ���ÿ��� ����
int pop()							
{
	if (isEmpty())
	{
		printf("STACK underflow!! \n");
		return;
	}
	else //���� �� else�����ֱ�
	{
		return stack[top--];			//������ ��(�� ������ �� top)�� retrun�����ָ��
										//���������� ������ �Ǳ� ������ 1�� ����
	}
}

// ���ÿ� Ȯ��
int peek()
{
	if (isEmpty())
	{
		printf("STACK underflow!! \n");
		exit(1);
	}
	else return stack[top];				//Ȯ�θ� �ϱ⶧���� ������ �ʿ����
}

void printStack()
{
	int i;
	//������ �ƴ� �� ���
	if (!isEmpty())
	{
		for (i = 0; i <= top; i++)
		{
			printf("%d   ", stack[i]);
		}
	}
}

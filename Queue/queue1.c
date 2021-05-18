//순차 자료 큐 이용한 원형 큐
//front == (rear + 1) -> full
//rear == front -> empty 
// 위 두개 조건 기억이 중요!
#include<stdio.h>
#include<stdbool.h>
#define SIZE 6

int isEmpty();
int isFull();
void enQueue(int);		//Q에 삽입
int deQueue();			//Q에서 제거(삭제)

/*변수 선언*/
int rear = 0;			//입구
int front = 0;			// 출구

/*순차 자료 구조 선언*/
int queue[SIZE];

/*main함수*/
int main()
{
	enQueue(10);
	enQueue(20);
	enQueue(30);
	printf("%d\n", deQueue()); //삭제된 놈 출력
	printf("%d\n", deQueue()); //삭제된 놈 출력
	printf("%d\n", deQueue()); //삭제된 놈 출력
	printf("%d\n", deQueue()); //underflow 출력

	return 0;
}

/*함수 생성*/

//공백 조건
int isEmpty()
{
	if (rear == front) return true;
	else return false;
}

// 포화 조건
//-> rear+1 ∵공백 조건과 겹치기 때문에 방 하나 비워줘야함
int isFull()
{
	if (front == (rear + 1) % SIZE) return true;
	// 증가하는 값을 index에 맞춰줘야함 
	// 사용할 수 있는 값이 5밖인데
	// 6이되면 0번방, 7이되면 1번방 이렇게 맞춰줘야함 
	// => 나머지 연산 사용
	else return false;
}

//Q에 데이터 삽입
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

//Q에 데이터 삭제
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
//스택구조를 순차 자료구조로 표현
//브라우저 통해서 인터넷 접속해서 클릭클릭 쭉쭉쭉 찾아갔다가 열려있는 창을 닫으면
//현재 창이 닫히고 또 다른 창을 닫으면 그 창이 닫히고 
//화면을 열 때 다른 화면이 열리는 것 요게 스택!
#include<stdio.h>
#include<stdbool.h>

#define STACK_SZ    3
//#define TRUE        1   //TRUE,FALSE를 C에서 stdbool.h에서 처리해줌
//#define FALSE       2

//상태확인이 우선 (Empty or Full)

int isEmpty();			// 공백 체크
int isFull();			// 포화 체크

void push(int);			// 스택에 입력
int pop();				// 스택에서 출력
int peek();				//맨 위의 스택 확인 peek();
						//맨 위에 있는 값이 출력됨으로 
						//pop으로 출력하면 맨 위 값이 삭제 되기 때문에 
						//값을 확인할 필요가 있음
void printStack();

int stack[STACK_SZ];	// 배열 크기 3 (위에서 선언함)

int top = -1;			//현재 스택의 위치 (초기화는 0도 1도 상관없지만 일반적으로 -1을 가짐)
						//스택이 입력될 때마다 값이 한자리씩 올라감 
						// 항상 스택의 맨 위를 가리킨다.
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
	if (top <= -1)return true;	// 이 조건이면 스택이 비어있음을 의미(공백)
	else return false;
}

int isFull()
{
	if (top >= STACK_SZ - 1)return true;
	else return false;
}

// 스택에 삽입
void push(int data)					
{
	if (isFull())//쉽게 말하면 이 자체가 에러이기 때문에
	{
		printf("STACK overflow!!\n");
		return;						// return하는 이유는? 다음 명령을 실행시키지 않기 위해서!
	}
	else
	{
		stack[++top] = data;		// top을 ++증감시켜서 0으로 만들어줌
	}
}

// 스택에서 삭제
int pop()							
{
	if (isEmpty())
	{
		printf("STACK underflow!! \n");
		return;
	}
	else //구문 상 else적어주기
	{
		return stack[top--];			//삭제할 놈(맨 마지막 값 top)을 retrun시켜주면됨
										//실질적으로 삭제가 되기 때문에 1씩 감소
	}
}

// 스택에 확인
int peek()
{
	if (isEmpty())
	{
		printf("STACK underflow!! \n");
		exit(1);
	}
	else return stack[top];				//확인만 하기때문에 감소할 필요없음
}

void printStack()
{
	int i;
	//공백이 아닐 때 출력
	if (!isEmpty())
	{
		for (i = 0; i <= top; i++)
		{
			printf("%d   ", stack[i]);
		}
	}
}

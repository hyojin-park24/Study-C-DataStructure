#include <stdio.h>

int main()
{
	int i;
	// 중복문에 사용될 int형 i변수 선언
	int score[5] = { 1,2,3 };
	// int형 배열요소 5개로 구성된 배열 score
	// score[0] = 1, score[1]=2, score[2]=3 이 되도록 초기화 및 메모리 할당
	char grade[5] = { 'A', 'B', 'C' };
	// cahr형 배열요소 5개로 구성된 배열 grade
	// grade[0] = A, grade[1] = B, grade[2] = C가 되도록 초기화 및 메모리 할당

	for ( i = 0; i < 5; i++)			// i가 0부터 4까지 다섯번 반복함
	{
		printf("%d\n", score[i]);
		//i가 5번동안 반복하면서 정수형으로 출력함 
		printf("%c\n", grade[i]);
		//i가 5번동안 grade에 지정한 요소만큼 반복하면서 문자형으로 출력함
	}

	return 0; // 함수 종료
}
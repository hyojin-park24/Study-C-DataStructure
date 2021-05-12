//문자 배열에 문자열을 저장하고 출력하기
#include <stdio.h>

void main()				//입출력이 없는 함수 즉 반환값 없음
{
	char str[20] = "Data Structure!";
	// char형 배열 요소 20개인 str
	// Data Structre!을 요소 20개인 str배열에 대입 및 초기화
	// 메모리에 문자열 저장됨 
	int i, cnt = 0;
	// 반복문에 사용 될 int형 변수 i선언
	// 반복문에 사용 될 int형 변수 cnt 선언 및 0 대입하고 초기화

	printf("\n 문자 배열 str[] : ");
	// 초기화 시킨 str배열 출력함수 
	
	for ( i = 0;str[i]; i++) // i가 배열중복문 20개 만큼 0부터 증가하면서 반복할게
	{
		printf("%c", str[i]);
		// 배열에 저장되어있는 문자열을 메모리에 저장되어있고
		// 저장된 값을 printf함수를 통해 출력
		// str[i]가 i값이 1씩 증가하면서 입력된 문자열을
		// 문자로 하나씩 출력시켜주고
		// 16번째 널값은 0이니 
		// 컴퓨터에서 0은 거짓이므로 널에서 for문 빠져나옴
		// 그리고 처음 printf함수에서 개행 없으므로
		// 연달아서 두번째 printf 까지 출력 가능함!
		//cnt++;
	}
	getchar();
	//printf("cnt : %d", cnt);

}
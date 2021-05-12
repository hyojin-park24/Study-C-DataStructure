//입력한 문자열의 길이 계산
#include <stdio.h>

int main()
{
	char str[20];
	// char형 배열 요소가 20개인 str 배열 
	int i, length = 0;
	// 중복문에 사용될 int형 변수 i선언
	// 문자열 길이에 사용될 int형 변수 length선언 및 0 대입으로 초기화
	printf("문자 열을 입력하세요 : ");
	
	gets(str);
	//문자열 입력에 특화 되어있는 함수 = gets 함수 
	// 첫번째 printf함수를 통해 입력받은 문자열을 버퍼에 저장한 뒤
	// str에 넣어주는 함수 

	printf("입력된 문자열 : \n");
	// str에 넣은 함수 호출
	//scanf("%s", str);

	for ( i = 0;str[i]; i++) // for문의 대장은 가운데 조건식이다
	{
		printf("%c", str[i]);
		// 버퍼에 저장해둔 str배열을 1씩 증가시켜 한문장씩 출력함
		length += 1;
		// str[i]가 1씩 증가하면서 length도 1씩 증가시켜줌
		// 그런데 i가 주인공이니 7번째 널을 만나면 종료되니
		// for문자체가 안돌아가서 length도 자연히 종료
	}
	printf("\" \n 입니다.");
	// "" 를 받아주기 위한 출력 
	printf("\n\n입력된 문자열의 길이 = %d \n", length);
	// 문자열 출력해줌 

	return 0; // 함수 종료
}
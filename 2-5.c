//입력한 문자열의 길이 계산
#include <stdio.h>

int main()
{
	char str[20];
	int i, length = 0;
	printf("문자 열을 입력하세요 : ");
	//문자열 입력에 특화 되어있는 함수 = gets 함수 
	gets(str);

	printf("입력된 문자열 : \n");
	//scanf("%s", str);

	for ( i = 0;str[i]; i++)
	{
		printf("%c", str[i]);
		length += 1;
	}
	printf("\" \n 입니다.");
	printf("\n\n입력된 문자열의 길이 = %d \n", length);

	return 0;
}
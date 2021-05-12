//점 연산자를 이용해 데이터 항목 참조하기
#include  <stdio.h>
#include <string.h>

struct employee
{
	char name[10];
	int year;
	int pay;
};

void main()
{
	int i;
	struct employee Lee[4] =
	{
		{"이진호", 2014, 4200},
		{"이한영", 2015, 3300},
		{"이지은", 2015, 10000},
		{"이지금", 2016, 50000}
	};

	for ( i = 0; i < 4; i++)
	{
		printf("\n 이름 : %s", Lee[i].name);
		printf("\n 입사 : %d", Lee[i].year);
		printf("\n 연봉 : %d \n", Lee[i].pay);
	}
	getchar();
}
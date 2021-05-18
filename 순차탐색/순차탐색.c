//탐색 (=검색)
#include <stdio.h>

int LSearch(int* pary, int sz, int tg)		//검색 함수
{
	int i;

	for ( i = 0; i < sz; i++)
	{
		if (pary[i] == tg) return i;
	}
	return -1;
}

int main()
{
	int index;			
	int ary[] = {3,5,8,2,7,6,1};			//배열 지정
	int size = sizeof(ary) / sizeof(ary[0]);// 배열 사이즈 정하기
	index = LSearch(ary, size, 10);			// 검색 함수 호출
	if (index == -1)printf("찾기 실패!!!\n");
	else printf("%d\n", index);
	return 0;
}
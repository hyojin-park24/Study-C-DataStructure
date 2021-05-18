#include <stdio.h>

int BSearch(int* pary, int sz, int tg)
{
	/*범위 설정하는 변수 선언*/
	int first = 0;
	int last = sz - 1;

	/*중간값 저장하는 변수 선언*/
	int mid;

	/*검색 조건*/
	while (first <= last)
	{
		mid = (first + last) / 2;	//이진트리 구조
		if (tg == pary[mid]) return mid;	//재수 좋아서 반으로 나눈 정수가 내가 원하는 값이면 mid리턴
		else
		{
			if (tg > pary[mid])
			{
				first = mid + 1;
			}
			else
			{
				last = mid - 1;
			}
		}
	}
	return -1;
}
int main()
{
	
	int ary[] = { 3,5,8,2,7,6,1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int index;

	index = BSearch(ary, size, 8);
	if (index == -1)printf("탐색실패!!!\n");
	else printf("방번호 : %d\n", index);

	return 0;
}
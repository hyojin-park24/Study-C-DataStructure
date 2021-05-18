/*선택 정렬 : 0번방을 최소값이라고 가정하고 나머지 원소들과 비교하여 교체한다*/
#include <stdio.h>

void selectSort(int*, int);

int main()
{
	int ary[] = { 4,2,7,5,9,1,8,3,6 };
	int size = sizeof(ary) / sizeof(ary[0]);// 사이즈 구하기
	selectSort(ary, size);

	return 0;
}

void selectSort(int* pary, int size)
{
	int i,j,k, min, temp;
	for (i = 0; i < size - 1; i++)		  //최솟값
	{
		min = i;
		for (j = i + 1; j < size; j++) //전체 비교
		{
			if (pary[min] > pary[j]) min = j;
		}

		temp = pary[min];
		pary[min] = pary[i];
		pary[i] = temp;
		printf("\n %d 단계: ", i + 1);
		for (k = 0; k < size; k++)
		{
			printf("%d ", pary[k]);
		}
	}
	
}
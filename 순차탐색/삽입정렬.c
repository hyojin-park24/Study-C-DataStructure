/*삽입 정렬 : 두번째 자료부터 앞 자료를 비교하여 정렬한다*/
#include <stdio.h>

void insertionSort(int*, int); // 정렬 함수
void print(int*, int);		   // 출력 함수

int main()
{
	int ary[] = { 4,2,7,5,9,1,8,3,6 };		//배열 정의
	int size = sizeof(ary) / sizeof(ary[0]);// 사이즈 구하기
	insertionSort(ary, size);				// 함수 호출
	print(ary, size);						// 함수 호출
			
	return 0;								// 함수 종료
}

/*정렬 함수 생성*/
void insertionSort(int* pary, int sz)
{
	int i,j,k, temp;						//변수 선언
	for (i = 1; i < sz; i++)				//반복 정렬
	{
		for ( j = i; j > 0; j--)			//비교하기위한 for문
		{
			if (pary[j] < pary[j - 1])		//값 바꾸는 swap함수문
			{
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		/*실행단계 확인 for문*/
		printf("\n%d 단계: ", i);
		for ( k = 0; k < sz; k++)
		{
			printf("%d  ", pary[k]);
		}
		printf("\n");
	}

}

void print(int* pary, int sz)			//출력 함수
{
	int i;
	for ( i = 0; i < sz; i++)
	{
		printf("apr[%d] = %d   ", i, pary[i]);
	}
}
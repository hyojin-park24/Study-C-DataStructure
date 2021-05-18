/*���� ���� : �ι�° �ڷ���� �� �ڷḦ ���Ͽ� �����Ѵ�*/
#include <stdio.h>

void insertionSort(int*, int); // ���� �Լ�
void print(int*, int);		   // ��� �Լ�

int main()
{
	int ary[] = { 4,2,7,5,9,1,8,3,6 };		//�迭 ����
	int size = sizeof(ary) / sizeof(ary[0]);// ������ ���ϱ�
	insertionSort(ary, size);				// �Լ� ȣ��
	print(ary, size);						// �Լ� ȣ��
			
	return 0;								// �Լ� ����
}

/*���� �Լ� ����*/
void insertionSort(int* pary, int sz)
{
	int i,j,k, temp;						//���� ����
	for (i = 1; i < sz; i++)				//�ݺ� ����
	{
		for ( j = i; j > 0; j--)			//���ϱ����� for��
		{
			if (pary[j] < pary[j - 1])		//�� �ٲٴ� swap�Լ���
			{
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		/*����ܰ� Ȯ�� for��*/
		printf("\n%d �ܰ�: ", i);
		for ( k = 0; k < sz; k++)
		{
			printf("%d  ", pary[k]);
		}
		printf("\n");
	}

}

void print(int* pary, int sz)			//��� �Լ�
{
	int i;
	for ( i = 0; i < sz; i++)
	{
		printf("apr[%d] = %d   ", i, pary[i]);
	}
}
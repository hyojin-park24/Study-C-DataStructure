//Ž�� (=�˻�)
#include <stdio.h>

int LSearch(int* pary, int sz, int tg)		//�˻� �Լ�
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
	int ary[] = {3,5,8,2,7,6,1};			//�迭 ����
	int size = sizeof(ary) / sizeof(ary[0]);// �迭 ������ ���ϱ�
	index = LSearch(ary, size, 10);			// �˻� �Լ� ȣ��
	if (index == -1)printf("ã�� ����!!!\n");
	else printf("%d\n", index);
	return 0;
}
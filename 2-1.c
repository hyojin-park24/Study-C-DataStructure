#include <stdio.h>

int main()
{
	int i;
	// �ߺ����� ���� int�� i���� ����
	int score[5] = { 1,2,3 };
	// int�� �迭��� 5���� ������ �迭 score
	// score[0] = 1, score[1]=2, score[2]=3 �� �ǵ��� �ʱ�ȭ �� �޸� �Ҵ�
	char grade[5] = { 'A', 'B', 'C' };
	// cahr�� �迭��� 5���� ������ �迭 grade
	// grade[0] = A, grade[1] = B, grade[2] = C�� �ǵ��� �ʱ�ȭ �� �޸� �Ҵ�

	for ( i = 0; i < 5; i++)			// i�� 0���� 4���� �ټ��� �ݺ���
	{
		printf("%d\n", score[i]);
		//i�� 5������ �ݺ��ϸ鼭 ���������� ����� 
		printf("%c\n", grade[i]);
		//i�� 5������ grade�� ������ ��Ҹ�ŭ �ݺ��ϸ鼭 ���������� �����
	}

	return 0; // �Լ� ����
}
//�Է��� ���ڿ��� ���� ���
#include <stdio.h>

int main()
{
	char str[20];
	int i, length = 0;
	printf("���� ���� �Է��ϼ��� : ");
	//���ڿ� �Է¿� Ưȭ �Ǿ��ִ� �Լ� = gets �Լ� 
	gets(str);

	printf("�Էµ� ���ڿ� : \n");
	//scanf("%s", str);

	for ( i = 0;str[i]; i++)
	{
		printf("%c", str[i]);
		length += 1;
	}
	printf("\" \n �Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� = %d \n", length);

	return 0;
}
// 구구단
#include <stdio.h>

int main()
{
    int n, i;
    char s;

    while (1)
    {
        printf("몇 단을 출력할까요? : ");
        scanf("%d", &n);

        for (i = 1; i < 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
        printf("\n종료하시겠습니까?(Y/N)\n");
        scanf(" %c", &s);
        if (s == 'Y') break;
    }

    return 0;
}
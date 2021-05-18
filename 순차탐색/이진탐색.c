#include <stdio.h>

int main()
{
	
	int ary[] = { 3,5,8,2,7,6,1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int index;

	index = BSearch();
	if (index == -1)printf("Å½»ö½ÇÆÐ!!!\n");
	else printf("%d\n", index);

	return 0;
}
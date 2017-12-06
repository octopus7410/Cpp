#include <stdio.h>
#include <stdlib.h>

int ex4_8()
{
	int num[2][5];
	int index1, index2;
	for (index1 = 0; index1 < 2; index1++)
	{
		for (index2 = 0; index2 < 5; index2++)
		{
			printf("¿é¤Jnum[%d][%d]: ", index1, index2);
			scanf("%d",&num[index1][index2]);
		}
	}

	for (index1 = 0; index1 < 2; index1++)
	{
		for (index2 = 0; index2 < 5; index2++)
		{
			printf("num[%d][%d]:%d\n", index1, index2, num[index1][index2]);
		}
	}

			printf("\n");
			printf("num=%p,num[0]=%p\n",num,num[0]);
			printf("num+1=%p,num[0]+1=%p\n", num + 1, num[0] + 1);
}
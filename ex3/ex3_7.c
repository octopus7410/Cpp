#include <stdio.h>
#include <stdlib.h>

void ex3_7()
{
	int i, j, n ;
	printf("��J�h��: ");
	scanf ("%d",&n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
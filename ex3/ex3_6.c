#include<stdio.h>
#include<stdlib.h>

void ex3_6()
{
	int i = 1, j = 1;
	while (i <= 9)
	{
		while (j<= 9)
		{
			printf("%d \* %d = %d  ", j, i, i*j);
				j++;
				if ((i*j) < 10)
				{
					printf(" ");
				}
		}
		printf("\n");
		i++;
			j = 1;
	}
}
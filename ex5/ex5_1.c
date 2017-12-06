#include<stdio.h>
#include<stdlib.h>
int ex5_1()
{
	int i, j, sale[2][4], sum = 0;
	for (i = 0; i <2; i++)
		for (j = 0; j < 4; j++)
		{
			printf("sales%d %d quarter results:", i + 1, j + 1);
			scanf("%d",&sale[i][j]);
		}
		printf("***Output***");
		for (i = 0; i<2; i++) 
		{
			printf("\nsales%d quarter results:", i + 1);
			for (j = 0; j<4; j++)
			{
				printf("%d ", sale[i][j]);
				sum += sale[i][j];
			}
		}
	printf("\n2015 results for the total sales volume of %d cars \n", sum);
}
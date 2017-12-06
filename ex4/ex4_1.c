#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex4_1()
{
	int n, i = 1, sum = 0;
	do
	{
		printf("輸入大於0的數:");
		scanf("%d", &n);
	} while (n <= 0); 
	do
	{
		sum += i;
		i++;
	} while (i <= n);
	printf("1+2+...+%d=%d\n", n, sum);
}
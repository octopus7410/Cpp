#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex4_1()
{
	int n, i = 1, sum = 0;
	do
	{
		printf("��J�j��0����:");
		scanf("%d", &n);
	} while (n <= 0); 
	do
	{
		sum += i;
		i++;
	} while (i <= n);
	printf("1+2+...+%d=%d\n", n, sum);
}
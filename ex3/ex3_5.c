#include <stdio.h>
#include <stdlib.h>
void ex3_5()
{
	int i = 1, sum = 0; 
	while (i <= 10)
	{
		sum += i;
		printf(" From 1 to accumulate %2d=%2d\n", i, sum);
		i++;
	}
}
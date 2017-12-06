#include <stdio.h> 
#include <stdlib.h> 
int factorial2(int);
int ex6_15()
{
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial2(num));
	return 0;
}

int factorial2(int n)
{
	int k, total = 1;
	for (k = 1; k <= n; k++)
		total *= k;
	return total;
}

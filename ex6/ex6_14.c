#include <stdio.h>  
#include <stdlib.h>
int factorial(int);
int ex6_14()
{
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial(num));

	return 0;
}
int factorial(int n)
{
	if (n > 1)
	{
		printf("%d\n", n);
		return (n * factorial(n - 1));

	}
	else
		return 1;
}

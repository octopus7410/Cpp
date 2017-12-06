#include <stdio.h>
#include <stdlib.h>
int ex3_8()
{
	int a, r;
		do
		{
			printf("Input an integer:");
			scanf("%d", &a);
		} while (a <= 0);
		printf("The reverse is ");
		while (a != 0)
		{
			r = a % 10;
			a /= 10;
			printf("%d", r);
		}
		printf("\n\n");
}
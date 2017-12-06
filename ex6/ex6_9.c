#include <stdio.h>
#include <stdlib.h>
int number;       
void output(void);
int ex6_9()
{
	printf("Please enter a number : ");
	scanf("%d", &number);
	output();
	return 0;
}

void output(void)
{
	printf("Number is %d\n", number);
}

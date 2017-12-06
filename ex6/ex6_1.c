#include<stdio.h>
#include<stdlib.h>
void outpute(void);
void dehh(void);
int ex6_1()
{
	printf("1\n");
	dehh();
	outpute();
	dehh();
	printf("4\n");
}
void outpute(void)
{
	printf("2\n");
	printf("3\n");
}
void dehh(void)
{
	for (int i = 0; i < 50; i++)
	{
		printf("-");
	}
		printf("\n");
}
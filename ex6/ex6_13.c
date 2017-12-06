#include <stdio.h>
#include <stdlib.h>
int input1();
int num1;
int ex6_13()
{

	input1();
	printf("數字為 %d\n", num1);

	return 0;
}
int input1()
{
	printf("輸入數:\n ");
	scanf("%d", &num1);
}
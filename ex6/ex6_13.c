#include <stdio.h>
#include <stdlib.h>
int input1();
int num1;
int ex6_13()
{

	input1();
	printf("�Ʀr�� %d\n", num1);

	return 0;
}
int input1()
{
	printf("��J��:\n ");
	scanf("%d", &num1);
}
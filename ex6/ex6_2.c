#include<stdio.h>
#include<stdlib.h>
int calculate();
int ex6_2()
{
	int x;

		x = calculate();
		if (x >= 60)
		{
			printf("pass");
		}
		else
		{
			printf("down");
		}
		return 0;
	
}
int calculate()
{
	int num;
	printf("�п�: ");
	scanf("%d", &num);
	return  num;
}

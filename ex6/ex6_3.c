#include<stdio.h>
#include<stdlib.h>
int calc();
int ex6_3()
{
	int x;

	x = calc();
	printf("­±¿n= %d\n",x);
	return 0;

}
int calc()
{
	int num1,num2;
	printf("½Ð¿é: ");
	scanf("%d %d", &num1,&num2);
	num1 = num1*num2;
	return  num1;
}
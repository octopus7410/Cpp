#include<stdio.h>
#include<stdlib.h>
int cepps();
int ex6_4()
{
	int x;

	x = cepps();
	printf("µ´¹ï­È= %d\n", x);
	return 0;

}
int cepps()
{
	int num;
	printf("½Ð¿é: ");
	scanf("%d", &num);
	if (num < 0)
	{
		num *= -1;
	}
	return  num;
}
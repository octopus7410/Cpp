#include<stdio.h>
#include<stdlib.h>
int cepps();
int ex6_4()
{
	int x;

	x = cepps();
	printf("�����= %d\n", x);
	return 0;

}
int cepps()
{
	int num;
	printf("�п�: ");
	scanf("%d", &num);
	if (num < 0)
	{
		num *= -1;
	}
	return  num;
}
#include <stdio.h>
#include <stdlib.h>
int esssx(int);
int ex6_6()
{
	int num;
	printf("�A�n�h�֬P�P �����R���A: ");
	scanf("%d", &num);
	esssx(num);
	return 0;
}
int esssx(s)
{
	for (s; s > 0; s--) printf("*");

	printf("\n");
}
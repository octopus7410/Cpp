#include <stdio.h>
#include <stdlib.h>
int esssx(int);
int ex6_6()
{
	int num;
	printf("你要多少星星 叔叔買給你: ");
	scanf("%d", &num);
	esssx(num);
	return 0;
}
int esssx(s)
{
	for (s; s > 0; s--) printf("*");

	printf("\n");
}
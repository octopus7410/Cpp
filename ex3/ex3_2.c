#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex3_2()
{
	int num1, num2, larger;
	printf("please input two integers\n");

	printf("key the number1:  "); scanf("%d", &num1);
	printf("key the number2:  "); scanf("%d", &num2);
	
	num1 > num2 ? (larger=num1) : (larger=num2);
	printf("%d grer value\n",larger);

}
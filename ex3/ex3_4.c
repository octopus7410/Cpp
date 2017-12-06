#include <stdio.h>
#include <stdlib.h>
void ex3_4()

{
	int a, b;
	char oper;
	printf("Please input the expression:");
	scanf("%d  %c  %d", &a,  &oper, &b);
	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b);
		break;
	case '/':
		printf("%d/%d=%.3f\n", a, b, a / b);
		break;
	default:
		printf("input error!!\n");
	}
}
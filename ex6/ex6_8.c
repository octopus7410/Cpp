#include <stdio.h>
#include <stdlib.h>
//double a878fmg();
//void printstar2();

double a878fmg(double a, double k, double d)
{

	return (a*a*a + k*k*k + d*d*d);

}

void printstar2()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}


int ex6_8()
{
	double sum, num1, num2,num3;
	printf("輸入三個數:\n ");
	scanf("%lf  %lf  %lf", &num1, &num2,&num3);
	sum = a878fmg(num1,num2,num3);
	printstar2();
	printf(" %lf 的立方加  %lf 的立方加　%lf 的立方為 %lf \n",num1,num2,num3,sum);
	printstar2();

	return 0;
}

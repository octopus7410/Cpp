#include <stdio.h>
#include <stdlib.h>
int aka878(int);
void printstar();
int ex6_7()
{
	int sum,num1,num2;
	printf("��J��Ӽ�:\n ");
	scanf("%d %d", &num1 ,&num2);
	sum=aka878(num1,num2);
	printstar();
	printf("%d ������[�@%d �����謰 %d\n",
		num1, num2, sum);
	printstar();

	return 0;
}
int aka878(a,k)
{
	int p;
	p = a*a + k*k;
	return p;

}
void printstar()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}

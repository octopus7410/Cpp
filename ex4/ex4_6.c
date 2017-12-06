#include<stdio.h>
#include<stdlib.h>

int ex4_6()
{
	int A[5] = { 80,88,866,484,13 };
	int i, min, max;
	min = max = A[0];

	for (i = 0; i <=4; i++)
	{
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
	}
	printf("最大值=%d\n",max);
	printf("最小值=%d\n",min);
}
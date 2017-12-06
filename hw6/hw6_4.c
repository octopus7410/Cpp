#include<stdio.h>
#include<stdlib.h>
int fun = 0, F2 = 0, F3 = 1;
int conponerX();
int hw6_4()
{
	int F0=0,F1=1;
	for(int i=1;i<=9;i++)
	{
		printf("%d ", F1 += F0);
		printf("%d ", F0 += F1);
	}
	printf("\n");
	conponerX();
	return 0;
}

 conponerX()
	{
		if(fun==9) return 0;
		else 
		{
			printf("%d ", F3 += F2);
			printf("%d ", F2 += F3);
			fun++;
			conponerX();
		}
	}
#include <stdio.h>
#include <stdlib.h>
int ex4_4()
{
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("&num[%d]=%p,num+%d=%p\n", i, &num[i], i, num+1);
	}
}
#include <stdio.h> 
#include <stdlib.h> 
int wdk()
{
	for (int i = 1; i <= 5; i++)
	{
		if (i == 4)
		{
			printf("break");
			break;
		}
		printf("%d", i);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void ex3_3()
{
	int score;
	printf("please input score: ");
	scanf("%d",&score);

	if (score < 60)
	{
		if (score >= 50)
			printf("make up exams\n");
		else
			printf("fail\n");
	}
	else
	{
		printf("pass\n");
	}
}
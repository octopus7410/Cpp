#include <stdio.h>
#include <stdlib.h>
int ex5_6()
{
	int i, j, tal[10][2];
	for(i=0;i<=9;i++)
		{
			j = 0;
			tal[i][j] = i+1;
			printf("�s��: %5d ",tal[i][j]);
			j = 1;
			printf("�п�J����:  ");
			scanf("%d", &tal[i][j]);
		}
	for (i = 0; i <= 9; i++)
		{	
			printf("�s��:%5d ����:%5d\n ",tal[i][0],tal[i][1]);
		}
}
#include <stdio.h>
#include <stdlib.h>
int ex5_2()
{
	int score[3][3] = { { 74, 72, 63 },{ 83, 92, 74 },{ 84, 82, 65 } };
	int index1, index2, total = 0;
	for (index1 = 0; index1 < 3; index1++)  
	{
		printf("\n第%d天的分數分別為: ", index1 + 1);
		for (index2 = 0; index2 < 3; index2++) 
		{
			printf("%3d", score[index1][index2]); 
			total += score[index1][index2];    
		}
	}
	printf("\n\n總分: %d\n", total);
	printf("平均分數: %.2f\n", total / 9.0);
}
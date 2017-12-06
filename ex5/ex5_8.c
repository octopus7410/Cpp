#include <stdio.h>
#include <stdlib.h>
int ex5_8()
{
	int i, j, k, temp, size,flog;
	int arr[] = { 80,30,40,70,50,60 };
	size = sizeof(arr) / sizeof(int);
	printf("***************資料排序前****************");

		for (i = 0; i < size; i++)
		{
			printf("%d ", arr[i]);
		}
	printf("\n");
	for (i = 1; i <=25 - 1; i++)
	{
		printf("-");
	}
	printf("\n");
	/*************************/
	for (i = 0; i < size - 1; i++)
	{
		flog = 0;
		for (j = 0; j < size -i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flog = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		printf("#%d pass",i+1);
		for (k = 0; k < size ; k++)
		{
			printf("%d ", arr[k]);
		}
		printf("\n");
		if (flog == 0)
			break;

	}
}
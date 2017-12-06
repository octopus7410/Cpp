#include <stdio.h>
#include <stdlib.h>
void ex5_9()
{
	int i, j, temp, flag, size;
	int left, right, mid, kd, bingo;
	int arr[] = { 80, 50, 40, 35, 20, 60 };
	size = sizeof(arr) / sizeof(int);

	/**********Bubble sort*************/
	for (i = 0; i<size - 1; i++) 
	{
		flag = 0;
		for (j = 0; j<size - i - 1; j++)
			if (arr[j] > arr[j + 1]) 
			{
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		if (flag == 0)
			break;
	}
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	/***********Binary search***********/
	printf("\n你要搜尋哪一個數字(輸入英文字母將結束): ");
	while (scanf("%d", &kd) == 1)
	{
		left = 0;
		right = size - 1;
		bingo = 0;
		while (left <= right) {
			mid = (left + right) / 2;
			if (kd == arr[mid]) {
				bingo = 1;
				break;
			}
			if (kd < arr[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (bingo == 1)
			printf("在arr[%d]中找到%d.\n", mid, kd);
		else
			printf("對不起，查無資料!\n");
		printf("\n你要搜尋哪一個數字(輸入英文字母將結束): ");
	}
	//system("PAUSE");
	//return 0;
}
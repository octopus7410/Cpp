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
	printf("\n�A�n�j�M���@�ӼƦr(��J�^��r���N����): ");
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
			printf("�barr[%d]�����%d.\n", mid, kd);
		else
			printf("�藍�_�A�d�L���!\n");
		printf("\n�A�n�j�M���@�ӼƦr(��J�^��r���N����): ");
	}
	//system("PAUSE");
	//return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex4_1();
int ex4_2();
int ex4_3();
int ex4_4();
int ex4_5();
int ex4_6();
int ex4_7();
int ex4_8();



int main()
{
	system("cls");
	_Bool flageer = 1;
	int input;
	while (flageer)
	{
		printf("1.Do while練習\n");
		printf("2.輸入列出陣列1\n");
		printf("3.輸入列出陣列2\n");
		printf("4.列出陣列元素位置\n");
		printf("5.輸入陣列方法\n");
		printf("6.陣列的應用－最大與最小值\n");
		printf("7.陣列界線的檢查\n");
		printf("8.二維陣列練習\n");
		printf("---------------------------------------------------------\n");
		printf("請輸入題號，輸入0則離開:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			flageer = 0;
			break;
		case 1:
			ex4_1();
			break;
		case 2:
			ex4_2();
			break;
		case 3:
			ex4_3();
			break;
		case 4:
			ex4_4();
			break;
		case 5:
			ex4_5();
			break;
		case 6:
			ex4_6();
			break;
		case 7:
			ex4_7();
			break;
		case 8:
			ex4_8();
			break;
		default:
			break;
		}
		if (flageer == 1)
		{
			system("pause");
		}
		system("cls");
	}
	return 0;
}
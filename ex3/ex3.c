#include <stdio.h>
#include <stdlib.h>
#include "c.h"
void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();
void ex3_5();
void ex3_6();
void ex3_7();
void ex3_8();


void main()
{
	system("cls");
	_Bool flageer = 1;
	int input;
	while (flageer)
	{
		printf("1.遞增與遞減運算子\n");
		printf("2.條件運算子&&範例\n");
		printf("3.巢狀 if 敘述練習\n");
		printf("4.switch  敘述範例\n");
		printf("5.while  迴圈&範例\n");
		printf("6.while 九九乘法表\n");
		printf("7.while   幾何圖形\n");
		printf("8.Do while反轉數字\n");
		printf("---------------------------------------------------------\n");
		printf("請輸入要執行的範例鍵入0則返回:");
		scanf("%d", &input);

		switch (input)
		{
			case 0:
				flageer = 0;
				break;
			case 1:
				ex3_1();
				break;
			case 2:
				ex3_2();
				break;
			case 3:
				ex3_3();
				break;
			case 4:
				ex3_4();
				break;
			case 5:
				ex3_5();
				break;
			case 6:
				ex3_6();
				break;
			case 7:
				ex3_7();
				break;
			case 8:
				ex3_8();
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

}
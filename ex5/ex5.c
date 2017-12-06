#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex5_1();
int ex5_2();
int ex5_3();
int ex5_4();
int ex5_5();
int ex5_6();
int ex5_7();
int ex5_8();
int ex5_9();
int main(void)
{
	system("cls");
	_Bool flageer = 1;
	int input;
	while (flageer)
	{
		printf("1.\n");
		printf("2.\n");
		printf("3.\n");
		printf("4.\n");
		printf("5.\n");
		printf("6.\n");
		printf("7.\n");
		printf("8.\n");
		printf("9.\n");
		printf("---------------------------------------------------------\n");
		printf("請輸入題號，輸入0則離開:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			flageer = 0;
			break;
		case 1:
			 ex5_1();
			break;
		case 2:
			ex5_2();
			break;
		case 3:
			ex5_3();
			break;
		case 4:
			ex5_4();
			break;
		case 5:
			ex5_5();
			break;
		case 6:
			ex5_6();
			break;
		case 7:
			ex5_7();
			break;
		case 8:
			ex5_8();
			break;
		case 9:
			ex5_9();
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
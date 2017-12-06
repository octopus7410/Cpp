#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex6_1();
int ex6_2();
int ex6_3();
int ex6_4();
int ex6_5();
int ex6_6();
int ex6_7();
int ex6_8();
int ex6_9();
int ex6_10();
int ex6_11();
int ex6_12();
int ex6_13();
int ex6_14();
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
			ex6_1();
			break;
		case 2:
			ex6_2();
			break;
		case 3:
			ex6_3();
			break;
		case 4:
			ex6_4();
			break;
		case 5:
			ex6_5();
			break;
		case 6:
			ex6_6();
			break;
		case 7:
			ex6_7();
			break;
		case 8:
			ex6_8();
			break;
		case 9:
			ex6_9();
			break;
		case 10:
			ex6_10();
			break;
		case 11:
			ex6_11();
			break;
	case 12:
			ex6_12();
			break;

	case 13:
			ex6_13();
			break;
	case 14:
			ex6_14();
			break;
	case 15:
		ex6_15();
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
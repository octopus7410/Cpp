#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex8_1();
int ex8_2();
int ex8_3();
int ex8_4();
int ex8_5();
int ex8_6();
int ex8_7();
int hw8_1();
int wdk();

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

		printf("---------------------------------------------------------\n");
		printf("請輸入題號，輸入0則離開:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			flageer = 0;
			break;
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			ex8_4();
			break;
		case 5:
			ex8_5();
			break;
		case 6:
			ex8_6();
			break;
		case 7:
			ex8_7();
			break;
		case 8:
			hw8_1();
			break;
		case 9:
			wdk();
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
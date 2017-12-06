#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex10_1();
int ex10_2();
int ex10_3();
int ex10_4();
int ex10_5();
int ex10_6();
int ex10_7();


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
			ex10_1();
			break;
		case 2:
			ex10_2();
			break;
		case 3:
			ex10_3();
			break;
		case 4:
			ex10_4();
			break;
		case 5:
			ex10_5();
			break;
		case 6:
			ex10_6();
			break;
		case 7:
			ex10_7();
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
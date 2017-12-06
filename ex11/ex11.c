#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex11_1();
int ex11_2();
int ex11_3();
int ex11_4();
int ex11_5();
int ex11_6();



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
		printf("7.HW\n");

		printf("---------------------------------------------------------\n");
		printf("請輸入題號，輸入0則離開:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			flageer = 0;
			break;
		case 1:
			ex11_1();
			break;
		case 2:
			ex11_2();
			break;
		case 3:
			ex11_3();
			break;
		case 4:
			ex11_4();
			break;
		case 5:
			ex11_5();
			break;
		case 6:
			ex11_6();
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
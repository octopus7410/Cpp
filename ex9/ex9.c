#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex9_1();
int ex9_2();
int ex9_3();
int ex9_4();
int ex9_5();
int ex9_6();
int ex9_7();


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
			ex9_1();
			break;
		case 2:
			ex9_2();
			break;
  	case 3:
			ex9_3();
			break;
		case 4:
			ex9_4();
			break;
		case 5:
			ex9_5();
			break;
		case 6:
			ex9_6();
 			break;
		case 7:
			ex9_7();
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
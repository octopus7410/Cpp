#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int hw6_1();
int hw6_2();
int hw6_3();
int hw6_4();
int hw6_5();

int main(void)
{
	system("cls");
	_Bool flageer = 1;
	int input;
	while (flageer)
	{
		printf("1.hw1\n");
		printf("2.hw2\n");
		printf("3.hw3\n");
		printf("4.hw4\n");
		printf("5.hw5\n");

		printf("---------------------------------------------------------\n");
		printf("請輸入題號，輸入0則離開:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			flageer = 0;
			break;
		case 1:
			hw6_1();
			break;
		case 2:
			hw6_2();
			break;
		case 3:
			hw6_3();
			break;
		case 4:
			hw6_4();
			break;
		case 5:
			hw6_5();
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
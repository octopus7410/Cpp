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
		printf("1.���W�P����B��l\n");
		printf("2.����B��l&&�d��\n");
		printf("3.�_�� if �ԭz�m��\n");
		printf("4.switch  �ԭz�d��\n");
		printf("5.while  �j��&�d��\n");
		printf("6.while �E�E���k��\n");
		printf("7.while   �X��ϧ�\n");
		printf("8.Do while����Ʀr\n");
		printf("---------------------------------------------------------\n");
		printf("�п�J�n���檺�d����J0�h��^:");
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
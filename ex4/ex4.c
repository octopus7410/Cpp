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
		printf("1.Do while�m��\n");
		printf("2.��J�C�X�}�C1\n");
		printf("3.��J�C�X�}�C2\n");
		printf("4.�C�X�}�C������m\n");
		printf("5.��J�}�C��k\n");
		printf("6.�}�C�����Ρг̤j�P�̤p��\n");
		printf("7.�}�C�ɽu���ˬd\n");
		printf("8.�G���}�C�m��\n");
		printf("---------------------------------------------------------\n");
		printf("�п�J�D���A��J0�h���}:");
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
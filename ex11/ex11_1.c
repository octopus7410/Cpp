#include <stdio.h>
#include <stdlib.h>
int ex11_1()
{
	/* ����scanf��Ʀb��J�r�������I */

	char ch;
	int i;
//�쥻
	printf("�L�ץ�\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
	}
//��k1
	printf("�ץ�1\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J��Ƭ�: ", i);
		rewind(stdin);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
	}
	rewind(stdin);
//��k2
	printf("�ץ�2\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
		while (getchar() != '\n');
		continue;
	}
	//��k3
	printf("�ץ�3\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
		while (getchar() != '\n');
	}
	return 0;
}

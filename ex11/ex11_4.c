#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int ex11_4()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getch();
	if (isalpha(ch))
		printf("\n%c ���^��r��\n", ch);
	else if (isdigit(ch))
		printf("\n%c ���Ʀr\n", ch);
	else
		printf("\n%c���O�@�^��r���μƦr\n", ch);
	return 0;
}

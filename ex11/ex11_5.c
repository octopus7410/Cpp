#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int ex11_5()
{
	char ch;
	printf("�п�J�@�ӭ^��r��: ");
	ch = getche();
	/* ����toupper */
	printf("\n���r�����j�g�O %c\n", toupper(ch));
	/* ����tolower */
	printf("���r�����p�g�O %c\n", tolower(ch));
	return 0;
}

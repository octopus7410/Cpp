#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
char tobig(char);
char tobsm(char);
int ex11_6()
{
	char ch;
	printf("�п�J�@�ӭ^��r��: ");
	ch = getche();
	/* ����toupper */
	printf("\n���r�����j�g�O %c\n", tobig(ch));
	/* ����tolower */
	printf("���r�����p�g�O %c\n", tobsm(ch));
	return 0;
}
char tobsm(char c)
{
	if (((c >= 65) && (c <= 90))||((c >= 97) && (c <= 122)))
	{
		if ((c >= 65) && (c <= 90))
			return (c + 32);
		else
			return c;
	}
	else
		printf("��J�ëD�^��");
	return;
}
char tobig(char c)
{
	if (((c >= 65) && (c <= 90))||((c >= 97) && (c <= 122)))
	{
		if ((c >= 97) && (c <= 122))
			return (c - 32);
		else
			return c;
	}
	else
		printf("��J�ëD�^��");
	return;
}
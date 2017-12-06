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
	printf("請輸入一個英文字母: ");
	ch = getche();
	/* 執行toupper */
	printf("\n此字母的大寫是 %c\n", tobig(ch));
	/* 執行tolower */
	printf("此字母的小寫是 %c\n", tobsm(ch));
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
		printf("輸入並非英文");
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
		printf("輸入並非英文");
	return;
}
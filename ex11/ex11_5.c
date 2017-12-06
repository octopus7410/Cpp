#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int ex11_5()
{
	char ch;
	printf("請輸入一個英文字母: ");
	ch = getche();
	/* 執行toupper */
	printf("\n此字母的大寫是 %c\n", toupper(ch));
	/* 執行tolower */
	printf("此字母的小寫是 %c\n", tolower(ch));
	return 0;
}

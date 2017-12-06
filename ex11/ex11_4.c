#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int ex11_4()
{
	char ch;
	printf("請輸入一個字元: ");
	ch = getch();
	if (isalpha(ch))
		printf("\n%c 為英文字母\n", ch);
	else if (isdigit(ch))
		printf("\n%c 為數字\n", ch);
	else
		printf("\n%c不是一英文字母或數字\n", ch);
	return 0;
}

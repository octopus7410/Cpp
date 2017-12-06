#include <stdio.h>
#include <stdlib.h>
int ex11_1()
{
	/* 測試scanf函數在輸入字元的缺點 */

	char ch;
	int i;
//原本
	printf("無修正\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 的輸入資料為: ", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
	}
//改法1
	printf("修正1\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 的輸入資料為: ", i);
		rewind(stdin);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
	}
	rewind(stdin);
//改法2
	printf("修正2\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 的輸入資料為: ", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
		while (getchar() != '\n');
		continue;
	}
	//改法3
	printf("修正3\n");
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 的輸入資料為: ", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
		while (getchar() != '\n');
	}
	return 0;
}

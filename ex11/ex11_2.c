#include <stdio.h>
#include <stdlib.h>
void output(char);  /* 函數output( )的原型宣告 */
int ex11_2()
{
	/* 測試字元的輸出入函數 */
	char ch;
	printf("\n\n…使用 getch()...\n");
	printf("請輸入一字元: ");
	ch = getch();  /* 使用getch( )輸入 */
	output(ch);
	printf("\n\n…使用 getche()...\n");
		printf("請輸入一字元: ");
	ch = getche();/*使用getche( )輸入*/
	output(ch);
	printf("\n\n…使用 getchar()...\n");
		printf("請輸入一字元: ");
	ch = getchar();/*使用getchar( )輸入*/
	output(ch);
	printf("\n");
	system("PAUSE");
	return 0;
}
/* 定義output( )函數，傳遞參數以c接收 */
void output(char c) {
	printf("\n使用 putchar()輸出字元: ");
		putchar(c);  /* 使用putchar( )輸出字元 */
}

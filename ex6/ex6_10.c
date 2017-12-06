#include <stdio.h>
#include <stdlib.h>
void input(void);   /* input( )的原型宣告 */
void output2(void);  /* output( )的原型宣告 */
int array[5];
int ex6_10()
{
	printf("此程式在測試全域變數\n");
		input();
	output2();
	return 0;
}

void input(void)
{
	int index;/*定義input( )的區域變數*/
	for (index = 0; index < 5; index++)
	{
		printf("請輸入 #%d 整數: ",
			index + 1);
		scanf("%d", &array[index]);
		/* 使用全域變數做輸入 */
	}
}
/* 定義output( )*/
void output2(void)
{
	int index;/*定義output( )的區域變數*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* 使用全域變數做輸出 */
		printf("array[%d] is %d\n", index,
			array[index]);
}

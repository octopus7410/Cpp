#include <stdio.h>
#include <stdlib.h>
int ex9_1()
{
	/* 宣告學生成績的結構型態 */
	struct student
	{
		char name[20];    /* 學生姓名 */
		int score; 	  /* 學生成績*/
	} rec1;            /* 定義結構變數rec1 */
	struct student rec2;    /* 定義結構變數rec2 */
    /* 以sizeof( )計算結構變數rec1與rec2所佔記憶體空間 */
	printf("rec1 結構佔 %d bytes\n", sizeof(rec1));
	printf("rec2 結構佔 %d bytes\n", sizeof(rec2));
	return 0;
}

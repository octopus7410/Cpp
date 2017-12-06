#include <stdio.h>
#include <stdlib.h>
int ex9_4()
{
	/* 宣告結構triangle的型態，以成員運算子" . "存取結構成員 */
	struct triangle
	{
		int length;	/* 正方形的長與高 */
		double area;	    /* 正方形的面積 */
	};
	struct triangle tri;
	printf("請輸入正方形的邊長: ");
	scanf("%d", &tri.length);  /* 以tri.length存取結構成員length */
	tri.area = tri.length *tri.length;  /*以tri.area 存取結構成員area*/
	printf("正方形的面積為: %.2f\n", tri.area);
	return 0;
}
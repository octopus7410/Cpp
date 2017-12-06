#include<stdio.h>
#include<stdlib.h>
int maxx();
int minn();
int i, def, x[3];
int hw6_3()
{
	printf("輸入三個數字，讓我找出最大最小:");
	for (i = 0; i<3; i++) scanf ("%d", &x[i]);
	maxx();
	minn();
	return 0;
}

maxx()
{
	def = x[1];
	for (i = 0; i < 3; i++)if (def < x[i])def = x[i];
	printf("max %d\n",def);
	return 0;
}
minn()
{
	def = x[1];
	for (i = 0; i < 3; i++)if (def > x[i])def = x[i];
	printf("min %d\n",def);
	return 0;
}
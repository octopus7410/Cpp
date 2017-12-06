#include <stdio.h>
#include <stdlib.h>
int square(int);
int ex6_5()
{
	int num, ans;
	printf("計算某一整數的平方\n\n");
	printf("請輸入一整數: ");
	scanf("%d", &num);
	ans = square(num); 
	printf("%d 的平方是 %d\n", num, ans);
	return 0;
}
int square(s)
{
	int total;
	total = s*s;
	return  total;
}

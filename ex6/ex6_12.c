#include <stdio.h>
#include <stdlib.h>
int APK89();
int num1;
int ex6_12()
{

	printf("輸入數:\n ");
	scanf("%d",&num1);
	APK89();
	printf("平方為 %d\n",num1);

	return 0;
}
int APK89()
{
	num1 = num1*num1;
}

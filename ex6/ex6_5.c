#include <stdio.h>
#include <stdlib.h>
int square(int);
int ex6_5()
{
	int num, ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���: ");
	scanf("%d", &num);
	ans = square(num); 
	printf("%d ������O %d\n", num, ans);
	return 0;
}
int square(s)
{
	int total;
	total = s*s;
	return  total;
}

#include <stdio.h>
#include <stdlib.h>
int conponer(int);
int conponer2(int,int);
int heen, keen, gcd,mabgcd;
int hw6_1()
{
	
	printf("�п�J�Ʀr: ");
	scanf("%d %d", &heen,&keen);
	int min = heen;
	int max = keen;
	if (min > keen)
	{
		min = keen;
		max = heen;
	}
	conponer(min);
	printf("�̤j���]�Ƭ�:%d\n",gcd);
	gcd=conponer2(max,min);
	printf("�̤j���]�Ƭ�:%d\n",gcd);
	return 0;
}
conponer(min)
{
	for (mabgcd = 1; mabgcd <= min; mabgcd++)
	{
		if ((heen%mabgcd == 0) && (keen%mabgcd == 0))gcd = mabgcd;
	}
	return 0;
}
conponer2(a,b)
{
	int c = b;
	if ((b=a%b) != 0)conponer2(a, b);
	else return c;
}


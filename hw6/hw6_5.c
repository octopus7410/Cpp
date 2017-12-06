#include<stdio.h>
#include<stdlib.h>

int peco();
int hw6_5()
{
	int time;
	do {
		peco();
		printf("按0離開,按1以增加次數\n");
		scanf("%d", &time);
	} while(time==1);
	return 0;
}

peco()
{
	static p1 = 0;
	printf("目前已開啟次數%d\n", ++p1);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int peco();
int hw6_5()
{
	int time;
	do {
		peco();
		printf("��0���},��1�H�W�[����\n");
		scanf("%d", &time);
	} while(time==1);
	return 0;
}

peco()
{
	static p1 = 0;
	printf("�ثe�w�}�Ҧ���%d\n", ++p1);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int number = 100;  /* �w�q�����ܼ� */
void output3(void);  /* output( )���쫬�ŧi */
int ex6_11()
{
	/* ���ը�Ʀb�ϰ��ܼƻP�����ܼƶ������� */
	printf("number is %d\n", number);
	output3();  /* �I�soutput( )��� */
	return 0;
}
/* �w�qoutput( ) */
void output3(void)
{
	int number = 200;  /* �w�q�ϰ��ܼ� */
	printf("number is %d\n", number); /* ��Xnumber */
}

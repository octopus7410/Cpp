#include <stdio.h> 
#include <stdlib.h> 
int ex8_1()
{
	int x = 100;//�w�q�ܼ� x 
	
	int *p1  = &x;   //�w�q�����ܼ� 
	int **p2 = &p1;  //�w�q���������ܼ�  
	printf("&x=%p, x=%d\n", &x, x);          /* �L�Xx�ܼƪ���}�P�� */ 
	printf("&p1=%p\, p1=%p\n",   &p1, p1);   /* �L�Xp1�����ܼƦ�} */
	printf("&p2=%p\, p2=%p\n",   &p2, p2);   /* �L�Xp2�����ܼƦ�} */  
	printf("*p1=%d\, **p2=%d\n", *p1, **p2); /* �L�Xp1�����ܼƪ��ȻPp2�����ܼƪ��� */ 
	printf("p1��%dbytes\, p2��%dbytes\n", sizeof(p1), sizeof(p2)); /* �L�Xp1�Pp2�����ܼƦ��h��bytes��} */  
	return 0;
} 

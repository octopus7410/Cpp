#include<stdio.h>
#include<stdlib.h>
int ex7_2()
{
	int *ptr, num = 20;
	ptr = &num;            /* �Nnum����}�]������ptr�s�� */
	printf("num=%d, &num=%x\n", num, &num);
	printf("*ptr=%d, ptr=%x, &ptr=%x\n", *ptr, ptr, &ptr);

	return 0;
}
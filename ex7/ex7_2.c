#include<stdio.h>
#include<stdlib.h>
int ex7_2()
{
	int *ptr, num = 20;
	ptr = &num;            /* 將num的位址設給指標ptr存放 */
	printf("num=%d, &num=%x\n", num, &num);
	printf("*ptr=%d, ptr=%x, &ptr=%x\n", *ptr, ptr, &ptr);

	return 0;
}
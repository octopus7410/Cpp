#include <stdio.h>  
#include <stdlib.h> 
int	ex7_4()
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	ptr1 = &a;    /* 將ptr1設為a的位址 */
	ptr2 = &b;     /* 將ptr2設為b的位址 */
	printf("a=%p, b=%p, \nptr1=%p, ptr2=%p\n", &a, &b, ptr1, ptr2);
	*ptr1 = 7;
	*ptr2 = 32;
	a = 17;
	ptr1 = ptr2;
	*ptr1 = 9;
	ptr1 = &a;
	a = 64;
	*ptr2 = *ptr1 + 5;
	ptr2 = &a;
	printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n", a, b, *ptr1, *ptr2);
	printf("ptr1=%p, ptr2=%p\n", ptr1, ptr2);
	system("pause");
	return 0;
}
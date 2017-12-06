#include <stdio.h> 
#include <stdlib.h> 
int ex8_6()
{
	int arr[2][3] = { {10, 20, 30}, {40, 50, 60} };
	int *ptr[2] = { arr[0], arr[1] };
	printf("*ptr=%p\n", *ptr);
	printf("**ptr=%d\n", **ptr);
	printf("*(ptr+1)=%p\n", *(ptr + 1));
	printf("**(ptr+1)=%d\n", **(ptr + 1));
	printf("*ptr+2=%p\n", *ptr + 2);
	printf("*(*ptr+2)=%d\n", *(*ptr + 2));
	printf("*(ptr+1)+2=%p\n", *(ptr + 1) + 2);
	printf("*(*(ptr+1)+2)=%d\n", *(*(ptr + 1) + 2));
	return 0;
}
#include <stdio.h> 
int ex8_2() 
{    
	int a=100;  
	int *p = &a; 
	int **pp = &p;
	printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
	return 0; 
} 
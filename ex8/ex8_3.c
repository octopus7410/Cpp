#include <stdio.h>
#include <stdlib.h>
int ex8_3( ) 
{     
	double d = 0;
	double *p = &d;
	double **pp = &p;
	printf("請輸入一 double 數: ");
	scanf("%lf", &d);
	printf("a=%.2lf, *p=%.2lf, and **pp=%.2lf\n", d, *p, **pp);
	return 0; 
}
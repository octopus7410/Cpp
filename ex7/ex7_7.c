#include <stdio.h>  
#include <stdlib.h> 
void swap(int *,int *);  /* ���swap()�쫬���ŧi */ 
int ex7_7()  
{    
	int a=5,b=20; 
	printf("Before swap..."); 
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);        
	printf("After swap...");  
	printf("a=%d,b=%d\n",a,b);

	return 0;
} 

void swap(int *p1, int *p2) 
{
	int tmp = *p1;  
	*p1 = *p2;  
	*p2 = tmp; 
}
#include <stdio.h> 
#include <stdlib.h> 
void rect(int,int,int *,int *); /* 函數rect()的原型 */
int ex7_8()
{    
	int a=5,b=8;  
	int area,peri;  
	rect(a,b,&area,&peri);  /* 呼叫rect(),計算面積及周長 */ 
	printf("area=%d,total length=%d\n",area,peri); 

   return 0;
}

void rect(int x, int y, int *p1, int *p2) 
{ 
	*p1 = x*y;    
	*p2 = 2 * (x + y); 
}

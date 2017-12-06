#include <stdio.h> 
#include <stdlib.h> 
int ex8_1()
{
	int x = 100;//定義變數 x 
	
	int *p1  = &x;   //定義指標變數 
	int **p2 = &p1;  //定義雙重指標變數  
	printf("&x=%p, x=%d\n", &x, x);          /* 印出x變數的位址與值 */ 
	printf("&p1=%p\, p1=%p\n",   &p1, p1);   /* 印出p1指標變數位址 */
	printf("&p2=%p\, p2=%p\n",   &p2, p2);   /* 印出p2指標變數位址 */  
	printf("*p1=%d\, **p2=%d\n", *p1, **p2); /* 印出p1指標變數的值與p2指標變數的值 */ 
	printf("p1佔%dbytes\, p2佔%dbytes\n", sizeof(p1), sizeof(p2)); /* 印出p1與p2指標變數佔多少bytes位址 */  
	return 0;
} 

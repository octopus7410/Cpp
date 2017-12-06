#include <stdio.h>  
#include <stdlib.h> 
int	ex7_3()
{    
	int *ptri;  /* 宣告指向整數的指標ptri */    
	char *ptrc;   /* 宣告指向字元的指標ptrc */ 

printf("sizeof(ptri)=%d\n", sizeof(ptri));   
printf("sizeof(ptrc)=%d\n", sizeof(ptrc));  
printf("sizeof(*ptri)=%d\n", sizeof(*ptri)); 
printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));     

return 0;
}
#include <stdio.h>  
#include <stdlib.h> 
int	ex7_3()
{    
	int *ptri;  /* �ŧi���V��ƪ�����ptri */    
	char *ptrc;   /* �ŧi���V�r��������ptrc */ 

printf("sizeof(ptri)=%d\n", sizeof(ptri));   
printf("sizeof(ptrc)=%d\n", sizeof(ptrc));  
printf("sizeof(*ptri)=%d\n", sizeof(*ptri)); 
printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));     

return 0;
}
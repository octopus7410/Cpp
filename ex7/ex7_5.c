#include <stdio.h> 
#include <stdlib.h> 
int ex7_5()
{ 
	int a1=100, *ptri;  
	float a2=3.2f, *ptrf;  
	ptri=&a2; /* ���~�A�Nint���A�����Ы��Vfloat���A���ܼ� */   
	ptrf=&a1;  /* ���~�A�Nfloat���A�����Ы��Vint���A���ܼ� */  
	printf("sizeof(a1)=%d\n",sizeof(a1));  
	printf("sizeof(a2)=%d\n",sizeof(a2));    
	printf("a1=%d,*ptri=%d\n",a1,*ptri);   
	printf("a2=%.1f,*ptrf=%.1f\n",a2,*ptrf); 

return 0;
}
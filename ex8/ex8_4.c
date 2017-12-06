#include <stdio.h> 
#include <stdlib.h> 
int ex8_4( ) 
{    
	int i; 
	char str[4][20] = {"Department", "of", "Information", "Management"};    
	for(i = 0; i<4; i++)
	{     
		printf("str + %d = %p\n", i, str+i);
		printf("*(str + %d) = %p\n", i, *(str+i));   
		printf("str [%d] = %p\n\n", i, str[i]);    
	}     
	return 0;
} 
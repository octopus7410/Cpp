#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<101;i=i+2)
	{	
	sum=i+sum;
    }
    printf("%d",sum);
    system("pause");
    return 0;
}


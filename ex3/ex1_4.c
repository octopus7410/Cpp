#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,sum=0,sumb=0;
	for(i=1;i<11;i++)
	{	
	sum=i*i;
	sumb=sum+sumb;
    }
    printf("%d\n",sumb);
    system("pause");
    return 0;
}

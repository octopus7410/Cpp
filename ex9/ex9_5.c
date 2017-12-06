#include <stdio.h>
#include <stdlib.h>
int ex9_5()
{
	struct mxy
	{
		char name[20]; 
		int points;    
	};
	struct mxy num = {"·F§A®Q",78};



		printf("%s\n",num.name);
		printf("%d\n",num.points);

	
	return 0;
}

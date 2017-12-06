#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int ex4_2()
{
	int fwb[4],i;
	fwb[0] = 878;
	fwb[1] = 687;
	fwb[2] = 306;
	fwb[3] = 478;
	for (i = 0; i <= 3; i++)
	{
		printf("fwb[%d]=%d\n", i, fwb[i]);
	}
}
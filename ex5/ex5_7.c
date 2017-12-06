#include <stdio.h>
#include <stdlib.h>
int ex5_7()
{
	int max, min , a1, a2, a3, A[2][4][3] = { {{21,32,65},{78,94,76},{79,44,65},{89,54,73}},{{32,56,89},{43,23,32},{32,56,78},{94,78,45} }
};
	max = min = A[0][0][0];
	for (a1=0;a1<=1;a1++)
	{
		for (a2 = 0; a2 <=3; a2++)
		{
			for (a3 = 0; a3 <= 2; a3++)
			{
				if (A[a1][a2][a3] > max)
					max = A[a1][a2][a3];
				if (A[a1][a2][a3] < min)
					max = A[a1][a2][a3];
			}
		}
	}
	printf("MAX=%d MIN=%d", max, min);
}
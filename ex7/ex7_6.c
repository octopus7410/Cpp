#include <stdio.h> 
#include <stdlib.h> 
void add10(int *);   /* add10()��ƪ��쫬 */
int ex7_6()
{
	int a = 5;
	printf("Before call add10(),a=%d\n", a);
	add10(&a);   /* �I�sadd10()��� */
	printf("After call add10(),a=%d\n", a);

	return 0;
}

void add10(int *p1)
{ 
	*p1 = *p1 + 10;
}
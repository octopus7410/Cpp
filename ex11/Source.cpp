#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
char hand[] = { "張 恆 煒 每 天 打 手 槍 " };
void job(void);
int hk416()
{
	job();
	//%%%%%%%%%%%%%%
	//%%%%%%%%%%%%%%
	system("pause");
	return 0;
}
void job()
{
	for (int i = 8; i>0; i--)
	{
		for (int p = 0; p <= i; p++)
		{
			printf("%c", hand[p]);
		}
		printf("\n");
	}
}
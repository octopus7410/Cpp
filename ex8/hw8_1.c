#include <stdio.h> 
#include <stdlib.h> 
int hw8_1()
{
	char* str[13]={"ad", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz"};
	printf("%d\n", sizeof(str));
		printf("%d\n", sizeof(str[0]));
		printf("%d\n", sizeof(str[0][0]));
		printf("%d\n", sizeof(str[1]));
		printf("%d\n", sizeof(str[1][0]));
	printf("%p\n", &str[0][1]);
	int i = 0;

		for (int j = 0; j < 13; j++)
		{
			for (int x = 0; x < 2; x++)
			{
				printf("%c ", *(*(str+j)+x));
			}
		}
	return 0;
}
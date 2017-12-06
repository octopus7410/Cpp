#include <stdio.h>
#include <stdlib.h>
int ans, input, max=10000000, min=1;
int init();
int getans();
int compare();
int powto();

int hw6_2()
{	
	powto();
	init();
	powto();
	getans();
	printf("ans=%d\n遊戲結束!!", ans);
	return 0;
}

init()
{
	printf("請輸入答案: ");
	scanf("%d", &ans);
}
getans()
{
	printf("請猜數字: ");
	scanf("%d", &input);
	if ((input<max) && (input>min)) compare();
	if (input == ans) return 0;
	printf("輸入的數字超出範圍請重新輸入\n");
	getans();
}
compare()
{
	if ((input > ans) && (input < max)) max = input;
	if ((input < ans) && (input > min)) min = input;
	if (input == ans) return 0;
	printf("%d<ans<%d\n", min, max);
	getans();
}
powto()
{
	system("cls");
	printf("-------------------------------------------------------------------\n");
	printf("--------------------------猜數字Ggamegame--------------------------\n");
	printf("-------------------------------------------------------------------\n");
}
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
	printf("ans=%d\n�C������!!", ans);
	return 0;
}

init()
{
	printf("�п�J����: ");
	scanf("%d", &ans);
}
getans()
{
	printf("�вq�Ʀr: ");
	scanf("%d", &input);
	if ((input<max) && (input>min)) compare();
	if (input == ans) return 0;
	printf("��J���Ʀr�W�X�d��Э��s��J\n");
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
	printf("--------------------------�q�ƦrGgamegame--------------------------\n");
	printf("-------------------------------------------------------------------\n");
}
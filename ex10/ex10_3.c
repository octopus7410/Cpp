#include <stdio.h>
#include <stdlib.h>
void list2();
void create2();
struct order
{
	char product[20]; /*���~�W��*/
	double price;    /*���~���*/
	int quantity;    /*���~�ƶq */
};
struct order num[5];
double total, total2;
int ii = 0;

int ex10_3()
{
char option;
do
{
	printf("\n1 => create  data\n");
	printf("2 => list  data\n");
	printf("3 => quit\n");
	printf("Please enter your choice: ");
	scanf("%s", &option);
	//option = getchar;  /* ��J�ﶵ */
	puts("");  /* ���� */
	switch (option)
	{
		/* �ﶵ1�I�screate( )��ư��s�W�u�@ */
	case '1': create2();
		break;
		/* �ﶵ2�I�slist( )��ư��C�L�u�@ */
	case '2': list2();
		break;
	case '3': printf("Bye bye!!\n");
		break;
	default: printf("Option error!!\n");
	}

} while (option != '3');  /* ��ܬ�3�h���X�j�� */
return 0;
}





void create2()
{		
	if(ii < 5)
	{
		printf("�п�J���~�W��: ");
		scanf("%s", num[ii].product);
		printf("�п�J���~����: ");
		scanf("%lf", &num[ii].price);
		printf("�п�J�q�ʼƶq: ");
		scanf("%d", &num[ii].quantity);
		ii++;
	}
	else
	{
		printf("�W�X�d��");
		return;
	}
}

void list2()
{
	for (int i = 0; i < ii; i++) {
		printf("\n<< �w��C�� >>\n");
		printf("���~�W��: %s\n", num[i].product);
		printf("����: %.1f\n", num[i].price);
		printf("�ƶq: %d\n", num[i].quantity);
		total = num[i].price*num[i].quantity;
		total2 *= total;
		printf("�`�@����: %.1f\n\n", total);
	}
	printf("�����`����: %.1f\n\n", total2);
	return;
}

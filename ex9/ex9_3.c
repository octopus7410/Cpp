#include <stdio.h>
#include <stdlib.h>
int ex9_3()
{
	struct order
	{
		char product[20]; /*���~�W��*/
		double price;    /*���~���*/
		int quantity;    /*���~�ƶq */
	};
	struct order num1 = { "iPod nano",6700.0, 20 }; /* �H�]�w�覡������� */
	struct order num2;
	double total1,total2;
	total1 = num1.price * num1.quantity;
	printf("�п�J���~�W��: ");
	scanf("%s", num2.product);
	printf("�п�J���~����: ");
	scanf("%lf", &num2.price);
	printf("�п�J�q�ʼƶq: ");
	scanf("%d", &num2.quantity);
	/* total���~�`�������~������H���~�ƶq */
	total2 = num2.price * num2.quantity;
	printf("\n<< �w��C�� >>\n");
	printf("���~�W��: %s\n", num1.product);
	printf("����: %.1f\n", num1.price);
	printf("�ƶq: %d\n", num1.quantity);
	printf("�`�@����: %.1f\n\n", total1);

	printf("���~�W��: %s\n", num2.product);
	printf("����: %.1f\n", num2.price);
	printf("�ƶq: %d\n", num2.quantity);
	printf("�`�@����: %.1f\n", total2);
	return 0;
}

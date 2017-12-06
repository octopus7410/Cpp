#include <stdio.h>
#include <stdlib.h>
int ex9_3()
{
	struct order
	{
		char product[20]; /*產品名稱*/
		double price;    /*產品單價*/
		int quantity;    /*產品數量 */
	};
	struct order num1 = { "iPod nano",6700.0, 20 }; /* 以設定方式給予初值 */
	struct order num2;
	double total1,total2;
	total1 = num1.price * num1.quantity;
	printf("請輸入產品名稱: ");
	scanf("%s", num2.product);
	printf("請輸入產品價格: ");
	scanf("%lf", &num2.price);
	printf("請輸入訂購數量: ");
	scanf("%d", &num2.quantity);
	/* total產品總價為產品單價乘以產品數量 */
	total2 = num2.price * num2.quantity;
	printf("\n<< 定單列表 >>\n");
	printf("產品名稱: %s\n", num1.product);
	printf("價格: %.1f\n", num1.price);
	printf("數量: %d\n", num1.quantity);
	printf("總共價格: %.1f\n\n", total1);

	printf("產品名稱: %s\n", num2.product);
	printf("價格: %.1f\n", num2.price);
	printf("數量: %d\n", num2.quantity);
	printf("總共價格: %.1f\n", total2);
	return 0;
}

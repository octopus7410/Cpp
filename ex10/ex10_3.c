#include <stdio.h>
#include <stdlib.h>
void list2();
void create2();
struct order
{
	char product[20]; /*產品名稱*/
	double price;    /*產品單價*/
	int quantity;    /*產品數量 */
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
	//option = getchar;  /* 輸入選項 */
	puts("");  /* 跳行 */
	switch (option)
	{
		/* 選項1呼叫create( )函數做新增工作 */
	case '1': create2();
		break;
		/* 選項2呼叫list( )函數做列印工作 */
	case '2': list2();
		break;
	case '3': printf("Bye bye!!\n");
		break;
	default: printf("Option error!!\n");
	}

} while (option != '3');  /* 選擇為3則跳出迴圈 */
return 0;
}





void create2()
{		
	if(ii < 5)
	{
		printf("請輸入產品名稱: ");
		scanf("%s", num[ii].product);
		printf("請輸入產品價格: ");
		scanf("%lf", &num[ii].price);
		printf("請輸入訂購數量: ");
		scanf("%d", &num[ii].quantity);
		ii++;
	}
	else
	{
		printf("超出範圍");
		return;
	}
}

void list2()
{
	for (int i = 0; i < ii; i++) {
		printf("\n<< 定單列表 >>\n");
		printf("產品名稱: %s\n", num[i].product);
		printf("價格: %.1f\n", num[i].price);
		printf("數量: %d\n", num[i].quantity);
		total = num[i].price*num[i].quantity;
		total2 *= total;
		printf("總共價格: %.1f\n\n", total);
	}
	printf("全部總價格: %.1f\n\n", total2);
	return;
}

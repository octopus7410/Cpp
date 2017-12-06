#include <stdio.h>
#include <stdlib.h>
struct work
{
	char name[20];  /* 姓名 */
	int hours;	  /* 工作時數 */
	int pay;	  /* 時薪 */
	int total_pay; /* 總工資 */
};
void calculate(struct work *);
int ex9_7()
{
	struct work service;  /* 定義結構變數 */
	service.pay = 120;
	printf("請輸入您的姓名:\n");
	scanf("%s", service.name);
	printf("請輸入工作時數:\n");
	scanf("%d", &service.hours);
	calculate(&service);
	/*呼叫calculate()函數，傳送service結構
	位址 */
	printf("您總共的薪資是 $%d\n",
		service.total_pay);
	system("PAUSE");
	return 0;
}
void calculate(struct work *ptr)
{
	ptr->total_pay = ptr->hours *
		ptr->pay;  /* 計算總工資 */
}


/*

	create()新增一筆資料
	list()  列印所有紀錄

	struct student classes[10];  
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct student
{
	int id;
	char name[10];
	double score;
};
//定義一結構陣列, 此陣列可存 10 筆資料
struct student classes[10];
int index = 0;
void create();  /* create( )函數的原型定義 */
void list();    /* list( )函數的原型定義 */
int ex10_2()
{
	char option;
	do
	{
		printf("\n1 => create student data\n");
		printf("2 => list student data\n");
		printf("3 => quit\n");
		printf("Please enter your choice: ");
		scanf("%s",&option);
		//option = getchar;  /* 輸入選項 */
		puts("");  /* 跳行 */
		switch (option)
		{
			/* 選項1呼叫create( )函數做新增工作 */
		case '1': create();
			break;
			/* 選項2呼叫list( )函數做列印工作 */
		case '2': list();
			break;
		case '3': printf("Bye bye!!\n");
			break;
		default: printf("Option error!!\n");
		}

	} while (option != '3');  /* 選擇為3則跳出迴圈 */
	return 0;
}



/* 定義 create()函數 */
void create()
{
	// 大於 10 代表陣列已滿, 列出提示訊息並返回 
	if (index >= 10) {
		printf("The array is full\n");
		return;
	}

	printf("\n<< Creating student data >>\n");
	printf("Student ID: ");
	scanf("%d", &classes[index].id);
	while (getchar() != '\n')
		continue;

	printf("Student name: ");
	scanf("%s", classes[index].name);

	printf("Student score: ");
	scanf("%lf", &classes[index].score);
	index++;
}

/* 定義list( )函數 */
void list()
{
	int i;
	printf("\n<< Listing student data >>\n");
	/* 利用for迴圈將結構陣列中的資料一一列出 */
	for (i = 0; i < index; i++)
		printf("%-10d  %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score);
}

#include <stdio.h>
#include <stdlib.h>
int ex10_5()
{
	/* 宣告結構型態 */
	struct node {
		char name[20];
		int  score;
		struct node *next;
	};
	struct node *ptr1, *ptr2, *ptr3, *current;

	ptr1 = (struct node *)malloc(sizeof(struct node));	/* 使用malloc函數配置記憶體 */

	printf("請輸入 ptr1 節點的姓名 : ");
		scanf("%s", &ptr1->name);  /* 輸入姓名 */
	printf("請輸入 ptr1 節點的分數 : ");
		scanf("%d", &ptr1->score);  /* 輸入分數 */

	ptr2 = (struct node *)malloc(sizeof(struct node));

	printf("\n請輸入 ptr2 節點的姓名 : ");
		scanf("%s", &ptr2->name);  /* 輸入姓名 */
	printf("請輸入 ptr2 節點的分數 : ");
		scanf("%d", &ptr2->score);      /* 輸入分數 */
									
	ptr1->next = ptr2;  /* 將 ptr1 的 next 指標指向 ptr2 */

	ptr3 = (struct node *) malloc(sizeof(struct node));

	printf("\n請輸入ptr3節點的姓名: ");
	scanf("%s", &ptr3->name);            /* 輸入姓名 */
	printf("請輸入ptr3節點的分數: ");
	scanf("%d", &ptr3->score);              /* 輸入分數 */
	ptr3->next = NULL;                 /*ptr3 的 next 指標設為NULL*/
	ptr2->next = ptr3;                 /*將 ptr2 的next 指標指向 ptr3*/
					  
	current = ptr1;                      //先將current指向ptr1
	printf("\n\n縺結串列的資料如下:\n");
	
	while (current != NULL) {            //判斷current指標所指向的節點是否為空節點
		printf("%10s ", current->name); /*輸出姓名*/
		printf("%5d\n", current->score);/*輸出分數*/
										//將current指向下一節點
		current = current->next;
	}
	return 0;
}

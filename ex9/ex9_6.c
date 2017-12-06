#include <stdio.h>
#include <stdlib.h>
int ex9_6()
{
	struct employee {
		char id[7];	/* ID號碼 */
		char name[20];	/* 員工姓名 */
		int salary;	/* 所得薪資 */
	};
	/* 宣告結構變數，並設定其初值 */
	struct employee general = { "D62128", "Johnson", 39000 };
	/* 定義結構指標變數，指向結構變數general的位址 */
	struct employee *ptr = &general;
	/* 使用->運算子取得各結構元素 */
	printf("<< 使用->運算子取得各結構元素>>\n");
	printf("ID number: %s\n", ptr->id);
	printf("Employee Name: %s\n", ptr->name);
	printf("Salary: %d\n\n", ptr->salary);

	/* 使用(*).運算子取得各結構元素 */
	printf("<< 使用(*).運算子取得各結構元素 >>\n");
	printf("ID number: %s\n", (*ptr).id);
	printf("Employee Name: %s\n", (*ptr).name);
	printf("Salary: %d\n", (*ptr).salary);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int ex9_6()
{
	struct employee {
		char id[7];	/* ID���X */
		char name[20];	/* ���u�m�W */
		int salary;	/* �ұo�~�� */
	};
	/* �ŧi���c�ܼơA�ó]�w���� */
	struct employee general = { "D62128", "Johnson", 39000 };
	/* �w�q���c�����ܼơA���V���c�ܼ�general����} */
	struct employee *ptr = &general;
	/* �ϥ�->�B��l���o�U���c���� */
	printf("<< �ϥ�->�B��l���o�U���c����>>\n");
	printf("ID number: %s\n", ptr->id);
	printf("Employee Name: %s\n", ptr->name);
	printf("Salary: %d\n\n", ptr->salary);

	/* �ϥ�(*).�B��l���o�U���c���� */
	printf("<< �ϥ�(*).�B��l���o�U���c���� >>\n");
	printf("ID number: %s\n", (*ptr).id);
	printf("Employee Name: %s\n", (*ptr).name);
	printf("Salary: %d\n", (*ptr).salary);
	return 0;
}

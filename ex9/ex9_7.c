#include <stdio.h>
#include <stdlib.h>
struct work
{
	char name[20];  /* �m�W */
	int hours;	  /* �u�@�ɼ� */
	int pay;	  /* ���~ */
	int total_pay; /* �`�u�� */
};
void calculate(struct work *);
int ex9_7()
{
	struct work service;  /* �w�q���c�ܼ� */
	service.pay = 120;
	printf("�п�J�z���m�W:\n");
	scanf("%s", service.name);
	printf("�п�J�u�@�ɼ�:\n");
	scanf("%d", &service.hours);
	calculate(&service);
	/*�I�scalculate()��ơA�ǰeservice���c
	��} */
	printf("�z�`�@���~��O $%d\n",
		service.total_pay);
	system("PAUSE");
	return 0;
}
void calculate(struct work *ptr)
{
	ptr->total_pay = ptr->hours *
		ptr->pay;  /* �p���`�u�� */
}


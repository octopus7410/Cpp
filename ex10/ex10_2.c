/*

	create()�s�W�@�����
	list()  �C�L�Ҧ�����

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
//�w�q�@���c�}�C, ���}�C�i�s 10 �����
struct student classes[10];
int index = 0;
void create();  /* create( )��ƪ��쫬�w�q */
void list();    /* list( )��ƪ��쫬�w�q */
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
		//option = getchar;  /* ��J�ﶵ */
		puts("");  /* ���� */
		switch (option)
		{
			/* �ﶵ1�I�screate( )��ư��s�W�u�@ */
		case '1': create();
			break;
			/* �ﶵ2�I�slist( )��ư��C�L�u�@ */
		case '2': list();
			break;
		case '3': printf("Bye bye!!\n");
			break;
		default: printf("Option error!!\n");
		}

	} while (option != '3');  /* ��ܬ�3�h���X�j�� */
	return 0;
}



/* �w�q create()��� */
void create()
{
	// �j�� 10 �N��}�C�w��, �C�X���ܰT���ê�^ 
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

/* �w�qlist( )��� */
void list()
{
	int i;
	printf("\n<< Listing student data >>\n");
	/* �Q��for�j��N���c�}�C������Ƥ@�@�C�X */
	for (i = 0; i < index; i++)
		printf("%-10d  %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score);
}

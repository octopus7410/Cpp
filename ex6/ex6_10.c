#include <stdio.h>
#include <stdlib.h>
void input(void);   /* input( )���쫬�ŧi */
void output2(void);  /* output( )���쫬�ŧi */
int array[5];
int ex6_10()
{
	printf("���{���b���ե����ܼ�\n");
		input();
	output2();
	return 0;
}

void input(void)
{
	int index;/*�w�qinput( )���ϰ��ܼ�*/
	for (index = 0; index < 5; index++)
	{
		printf("�п�J #%d ���: ",
			index + 1);
		scanf("%d", &array[index]);
		/* �ϥΥ����ܼư���J */
	}
}
/* �w�qoutput( )*/
void output2(void)
{
	int index;/*�w�qoutput( )���ϰ��ܼ�*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* �ϥΥ����ܼư���X */
		printf("array[%d] is %d\n", index,
			array[index]);
}

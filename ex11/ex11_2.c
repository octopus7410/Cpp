#include <stdio.h>
#include <stdlib.h>
void output(char);  /* ���output( )���쫬�ŧi */
int ex11_2()
{
	/* ���զr������X�J��� */
	char ch;
	printf("\n\n�K�ϥ� getch()...\n");
	printf("�п�J�@�r��: ");
	ch = getch();  /* �ϥ�getch( )��J */
	output(ch);
	printf("\n\n�K�ϥ� getche()...\n");
		printf("�п�J�@�r��: ");
	ch = getche();/*�ϥ�getche( )��J*/
	output(ch);
	printf("\n\n�K�ϥ� getchar()...\n");
		printf("�п�J�@�r��: ");
	ch = getchar();/*�ϥ�getchar( )��J*/
	output(ch);
	printf("\n");
	system("PAUSE");
	return 0;
}
/* �w�qoutput( )��ơA�ǻ��ѼƥHc���� */
void output(char c) {
	printf("\n�ϥ� putchar()��X�r��: ");
		putchar(c);  /* �ϥ�putchar( )��X�r�� */
}

#include <stdio.h>
#include <stdlib.h>
int ex9_4()
{
	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���� */
	struct triangle
	{
		int length;	/* ����Ϊ����P�� */
		double area;	    /* ����Ϊ����n */
	};
	struct triangle tri;
	printf("�п�J����Ϊ����: ");
	scanf("%d", &tri.length);  /* �Htri.length�s�����c����length */
	tri.area = tri.length *tri.length;  /*�Htri.area �s�����c����area*/
	printf("����Ϊ����n��: %.2f\n", tri.area);
	return 0;
}
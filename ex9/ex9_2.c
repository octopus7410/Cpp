#include <stdio.h>
#include <stdlib.h>
int ex9_2()
{
	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���� */
	struct triangle
	{
		int length, height;	/* �T���Ϊ����P�� */
		double area;	    /* �T���Ϊ����n */
	};
	struct triangle tri;
	printf("�п�J�T���Ϊ���: ");
	scanf("%d", &tri.length);  /* �Htri.length�s�����c����length */
	printf("�п�J�T���Ϊ���: ");
	scanf("%d", &tri.height);  /* �Htri.height�s�����c����height */
	tri.area = tri.length * tri.height / 2.0; /*�Htri.area �s�����c����area*/
	printf("�T���Ϊ����n��: %.2f\n", tri.area);
	return 0;
}

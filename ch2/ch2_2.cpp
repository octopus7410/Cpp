#include <iostream>
#include <cstdlib>
using namespace std;
void printX(void);	// ���C�@�Ӧh�����禡���ŧi�禡���쫬
void printX(int);
void printX(char, int);
void ch2_2(void)
{
	cout << "�I�s printX(), ";  printX();
	cout << "�I�s printX(5), "; printX(5);
	cout << "�I�s printX('+',7), "; printX('+', 7);
}
void printX(void)	// �S���޼�, �L�X�@�� *
{
	cout << "*" << endl;
}
void printX(int iNum) // �ھڤ޼ƪ���, �L�X���w�ƥت� *
{
	int i;
	for (i = 0; i < iNum; i++) cout << "*";
	cout << endl;
}
void printX(char ch, int iNum) // �ھڤ޼ƪ���, �L�X���w�ƥت� ch
{
	int i;
	for (i = 0; i < iNum; i++) cout << ch;
	cout << endl;
}

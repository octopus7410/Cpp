#include <cstdio>
#include <iostream>
#include<iomanip>

using namespace std;

void ch1_3(void)
{
	int ix = 125;
	float fy = 12.345f;
	cout << "1234567890 ��ӥ�" << endl;
	cout.width(10); cout << ix << endl;
	cout << setw(10) << fy << endl;
}
void ch1_4(void)
{
	char *cName[] = { "Apple", "Orange", "Pear" };
	float fVal[] = { 1.1f, 12.21f, 123.321f };
	cout << "12345678901234567890 ��ӥ�" << endl;
	for (int i = 0; i < 3; i++) {
		cout << setiosflags(ios::left); // �a�����, �����ɦV cout
		cout.width(8); cout << cName[i];
		cout << resetiosflags(ios::left) // �����a�����,�^��a�k���
			<< setw(10) << fVal[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout.fill('*'); // �]�w�񺡦r���� *
		cout << resetiosflags(ios::left); //�a�k���
		cout.width(8); cout << cName[i];
		cout << setiosflags(ios::left); // �a�����
		cout << setfill('^')  //�]�w�񺡦r���� ^
			<< setw(10) << fVal[i] << endl;
	}
}
void ch1_5(void)
{
	float fVal[] = { 1.1f, 12.21f, 123.321f, 1234.4321f };
	cout << "��l�ƭ�"; cout << setprecision(8); // ��� 8 �ӼƦr
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << " 3�Ӧr��"; cout << setprecision(3); // ��� 3 �ӼƦr
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << "�T�w����"; cout << setiosflags(ios::fixed); // �T�w����
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << resetiosflags(ios::fixed); //�M���T�w���ת����
	cout << "��ǰO��"; cout << setiosflags(ios::scientific); // ��ǰO��
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
}
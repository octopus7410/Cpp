#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void ch1_6(void)
{
	int ix;
	char cName[20];
	char cAddr[20];
	char cBirthDay[20];
	do {
		cout << "��J�Ǹ� "; cin >> ix;
		if (!cin.fail()) { cin.sync(); break; } // ��J���\
		cin.clear(); cin.sync();
	} while (1);
	cout << "��J�m�W "; cin>> cName; cin.clear(); cin.sync();
	cout << "��J�ͤ�(yymmdd) "; cin>>cBirthDay; cin.clear(); cin.sync();
	cout << "��J��} "; cin>>cAddr; cin.clear(); cin.sync();
	cout << "�Ǹ� : " << ix << " �m�W : " << cName << endl;
	cout << "�ͤ� : " << cBirthDay << " ��} : " << cAddr << endl;
}

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
		cout << "輸入學號 "; cin >> ix;
		if (!cin.fail()) { cin.sync(); break; } // 輸入成功
		cin.clear(); cin.sync();
	} while (1);
	cout << "輸入姓名 "; cin>> cName; cin.clear(); cin.sync();
	cout << "輸入生日(yymmdd) "; cin>>cBirthDay; cin.clear(); cin.sync();
	cout << "輸入住址 "; cin>>cAddr; cin.clear(); cin.sync();
	cout << "學號 : " << ix << " 姓名 : " << cName << endl;
	cout << "生日 : " << cBirthDay << " 住址 : " << cAddr << endl;
}

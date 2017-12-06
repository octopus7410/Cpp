#include <cstdio>
#include <iostream>
#include<iomanip>

using namespace std;

void ch1_3(void)
{
	int ix = 125;
	float fy = 12.345f;
	cout << "1234567890 對照用" << endl;
	cout.width(10); cout << ix << endl;
	cout << setw(10) << fy << endl;
}
void ch1_4(void)
{
	char *cName[] = { "Apple", "Orange", "Pear" };
	float fVal[] = { 1.1f, 12.21f, 123.321f };
	cout << "12345678901234567890 對照用" << endl;
	for (int i = 0; i < 3; i++) {
		cout << setiosflags(ios::left); // 靠左對齊, 必須導向 cout
		cout.width(8); cout << cName[i];
		cout << resetiosflags(ios::left) // 取消靠左對齊,回到靠右對齊
			<< setw(10) << fVal[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout.fill('*'); // 設定填滿字元為 *
		cout << resetiosflags(ios::left); //靠右對齊
		cout.width(8); cout << cName[i];
		cout << setiosflags(ios::left); // 靠左對齊
		cout << setfill('^')  //設定填滿字元為 ^
			<< setw(10) << fVal[i] << endl;
	}
}
void ch1_5(void)
{
	float fVal[] = { 1.1f, 12.21f, 123.321f, 1234.4321f };
	cout << "原始數值"; cout << setprecision(8); // 顯示 8 個數字
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << " 3個字元"; cout << setprecision(3); // 顯示 3 個數字
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << "固定長度"; cout << setiosflags(ios::fixed); // 固定長度
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << resetiosflags(ios::fixed); //清除固定長度的顯示
	cout << "科學記號"; cout << setiosflags(ios::scientific); // 科學記號
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
}
#include <iostream>
#include <cstdlib>
using namespace std;
void printX(void);	// –更ㄧΑ常ㄧΑ
void printX(int);
void printX(char, int);
void ch2_2(void)
{
	cout << "㊣ printX(), ";  printX();
	cout << "㊣ printX(5), "; printX(5);
	cout << "㊣ printX('+',7), "; printX('+', 7);
}
void printX(void)	// ⊿Τま计,  *
{
	cout << "*" << endl;
}
void printX(int iNum) // 沮ま计, ﹚计ヘ *
{
	int i;
	for (i = 0; i < iNum; i++) cout << "*";
	cout << endl;
}
void printX(char ch, int iNum) // 沮ま计, ﹚计ヘ ch
{
	int i;
	for (i = 0; i < iNum; i++) cout << ch;
	cout << endl;
}

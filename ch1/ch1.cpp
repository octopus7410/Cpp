#include <cstdio>
#include <iostream>

using namespace std;
void ch1_1(void);
void ch1_2(void);
void ch1_3(void);
void ch1_4(void);
void ch1_5(void);
void ch1_6(void);
void hw1_1(void);

void main(void)
{
	system("cls");
	bool flageer = 1;
	int input;
	while (flageer)
	{
		cout << "1.\n";
		cout << "2.\n";
		cout << "3.\n";
		cout << "4.\n";
		cout << "5.\n";
		cout << "6.\n";
		cout << "7.\n";

		cout << "---------------------------------------------------------\n";
		cout << "請輸入題號，輸入0則離開:";
		cin >> input;

		switch (input)
		{
		case 0:
			flageer = 0;
			break;
		case 1:
			ch1_1();
			break;
		case 2:
			ch1_2();
			break;
		case 3:
			ch1_3();
			break;
		case 4:
			ch1_4();
			break;
		case 5:
			ch1_5();
			break;
		case 6:
			ch1_6();
			break;
		case 7:
			hw1_1();
			break;
		default:
			break;
		}
		if (flageer == 1)
		{
			system("pause");
		}
		system("cls");
	}
	return ;
}
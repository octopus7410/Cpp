#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void hw1_1(void)
{
	int x1 = 0, x2, x3, x4;
	cout << "½Ð¿é¤J¼Æ¦r:" << endl;
	cin >> x1;
	for (x2 = x1; x2>0; x2 -= 1){
		for (x3 = x2; x3>0; x3 -= 1){
			cout<<" ";
		}
		for (x4 = (x1 - x2)*2 + 1; x4>0; x4 -= 1){
			cout<<"*";
		}
		cout <<endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	for (x2 = x1; x2>0; x2 -= 1) {
		for (x3 = x2; x3>0; x3 -= 1) {
			cout << " ";
		}
		for (x4 = x1 - x2; x4>0; x4 -= 1) {
			cout << "*";
		}
		if(x2==x1) cout << "*";
		else cout << " ";
		for (x4 = x1-x2; x4>0; x4 -= 1) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;
	x1 = x1 / 2 + 1;
	for (x2 = x1; x2>0; x2 -= 1) {
		for (x3 = x2; x3>0; x3 -= 1) {
			cout << " ";
		}
		for (x4 = (x1 - x2) * 2 + 1; x4>0; x4 -= 1) {
			cout << "*";
		}
		cout << endl;
	}
	for (x2 = x1-1; x2>0; x2 -= 1) {
		for (x3 = x1-x2+1; x3>0; x3 -= 1) {
			cout << " ";
		}
		for (x4 =x2*2 -1; x4>0; x4 -= 1) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;


	for (x2 = x1; x2>0; x2 -= 1) {
		for (x3 = x2; x3>0; x3 -= 1) {
			cout << " ";
		}
		cout << "*";
		for (x4 = (x1 - x2) * 2-1; x4>0; x4 -= 1) {
			cout << " ";
		}
		if(x2!=x1)cout << "*";
		cout << endl;
	}
	for (x2 = x1 - 1; x2>0; x2 -= 1) {
		for (x3 = x1 - x2 + 1; x3>0; x3 -= 1) {
			cout << " ";
		}
		cout << "*";
		for (x4 = x2 * 2 - 3; x4>0; x4 -= 1) {
			cout << " ";
		}
		if (x2 !=1)cout << "*";
		cout << endl;
	}
}
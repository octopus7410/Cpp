#include <cstdio>
#include <iostream>
#include<iomanip>

using namespace std;

class Base
{
private:
	int a, b;
public:
	Base(int l, int m) {
		a = l, b = m;
	}
	void show(char str1[], char str2[]) {
		cout << str1 << a << endl;
		cout << str2 << b << endl;
	}
};

class Derived : public Base
{
private:
	int c;
public:
	Derived(int l, int m, int n) :Base(l,m){
		c = n;
	}
	void show(char str3[]) {
		cout << str3 << c << endl;
	}

};
void ch2_1(void)
{
	Derived d(2, 3, 5);
	char s1[] = "a=";
	char s2[] = "b=";
	char s3[] = "c=";
	d.Base::show(s1, s2);
	d.Derived::show(s3);
}
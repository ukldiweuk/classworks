
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int min(int r, int a, int c) {
	if (r > c && a > c) {
		 return c ;
	}
	else if(a < c && r > a) {
		return a;
	 
	}
	else {
		return r;
	}
}

int power(int a, int b) {
	int c = 1;
	while (b > 0) {
		b = b - 1;
		c = c * a;
	}
	
return c;
}
string capitalize(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 97 && a[i] <= 122) {
			a[i] -= 32;
		}

	}
	return a;
}






int main()
{
	//setlocale(LC_ALL, "rus");
	//int num1 = 8;
	//int num2 = 6;
	//int num3 = 2;
	//int saw= min(num1, num2, num3);
	//cout <<  saw  << endl;

	/*setlocale(LC_ALL, "rus");
	int a;
	int b;
	cout << "введіть число" << endl;
	cin >> a;

	cout << "введіть степінь" << endl;
	cin >> b;
	int c = power (a,b);
	cout << c;
	*/





	string a;
	cin >> a;
	string result = capitalize(a);
	cout << capitalize( a) << endl;

	





















}


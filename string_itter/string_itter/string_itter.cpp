//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++){
		if (a[i] >= 97 && a[i] <= 122) {
			a[i] -= 32;
		}
			
	}
	cout << a << endl;


	return 0;
}

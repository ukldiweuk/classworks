
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()


{
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	cout << "введіть число" << endl;
	cin >> a;
	
	cout << "введіть степінь" << endl;
	cin >> b;
	int c = 1;
	while (b > 0) {
		b = b - 1;
		c = c * a;
	
	}
	cout << c;











}

	







  





#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n = 0;
	int sum =  0;
	cout << "введіть число";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "i = " << i << endl;
		sum += i;
	    
	}
	cout << endl << sum << endl;







}
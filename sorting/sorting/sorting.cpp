

#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int n = 10;
	int *a = new int[n];
	for ( int i = 0; i < 10; i++) {
		a[i] = rand() % 10;
		cout << a[i] << endl;
	}
	int min = a[0];
	for (int i = 0; i < 10; i++){
		a[i] = rand() % 10;
		cout << a[i] << endl;	
	}
	
	
	
	
	
	
}




#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n = 10;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
		cout << &(arr[i]) << endl;
	}
	delete[] arr;
	
	
	
	
	
	
	
	//int a = 10;
	//int *p = &a;
    //cout << *p << endl;
	
	
	
	
	
	
	

}




#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[4][6];
	 
	 for (int i = 0; i < 4; i++) {
		 for (int j = 0; j < 6; j++) {
			 arr[i][j] = i + j;
		cout << arr[i][j] << " ";
		
		 }
		 cout << endl;
	 }









}


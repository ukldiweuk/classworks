
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	ifstream  ifs("C:\\Users\\Admin\\Desktop\\websites.txt") ;
	int Sum = 0;
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			ifs >> arr[i][j];
			cout << arr[i][j] << " ";
			Sum = Sum + arr[i][j];
			cout << Sum << endl;
		}
		
		cout << endl;
	}        











}


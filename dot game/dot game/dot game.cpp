

#include "pch.h"
#include <iostream>

using namespace std;
void drawField(char(*field)[10], int h) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < h; i++) {
			cout << field[i][j];
		}
		cout << endl;
	}
}



int main()
{
	int i = 0;
	int j = 0;
	setlocale(LC_ALL, "rus");
	char arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; i++) {
			cout << field[i][j];
		
		}
		cout << endl;
	}

		 
	int x = 0; int y = 0;
	drawField(arr, 10);










}


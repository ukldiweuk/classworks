

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void drawField(char(*field)[10], int h) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < h; j++) {
		cout <<field [i][j]  ;
		}
		cout << endl;
	}
}



int main()
{
	//setlocale(LC_ALL, "rus");
	char field[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			field[i][j] = '#';
		}
	}

	
	
	int i = 0;
	int j = 0;
	field[i][j] = '.';
	drawField(field, 10);
	int move = _getch();
	while (true) {
		move = _getch();
		switch (move) {
		case 72: {
			field[i][j] = '#';
			i = i - 1;
			field[i][j] = '.';
			break;
		}
		case 80: {
			field[i][j] = '#';
			i = i + 1;
			field[i][j] = '.';
			break;
		}
		case 77: {
			field[i][j] = '#';
			j = j + 1;
			field[i][j] = '.';
			break;
		}
		case 75: {
			field[i][j] = '#';
			j = j - 1;
			field[i][j] = '.';
			break;
		}
		}
		system("cls");
		drawField(field, 10);
		
	}

}


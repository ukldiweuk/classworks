#include "pch.h"
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int randomNumber = rand() % 50 + 1;
	cout << "Кулька потрапила на поле" << randomNumber << endl;
	// поле більше 25
	if (randomNumber > 25) {
		cout << "ви виграли!" << endl;
	}
	else {
		cout << "ви програли!" << endl;
	}
	// число від 10 до 30 
	
	if (randomNumber >= 10 && randomNumber <= 30) {
		cout << "ви виграли!" << endl;
	}
	else {
		cout << "ви програли!" << endl;
	}

	// число парне
	

	if (randomNumber % 2 == 0 ) {
		cout << "ви виграли!" << endl;
	}
	else {
		cout << "ви програли!" << endl;
	}





}





#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	
	
	
	string characters[4]{ "кіт","вася","бомж ", " Бодя" };
	string action[4]{ "пє","спить","пиляє","стрибає" };
	string because[4]{ " щоб випиляти гарну фігуру","щоб спитися","щоб виспатися","щоб покакати" };
	
	int j = rand() % 3;
	int k = rand() % 3;
	int i = rand() % 3;
	cout << characters[i] << " " << action[j] << " " << because[k] << " ";
	
	
	
	
	
	
	
	
}



#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int words[13];
	ifstream ifs;
	
	ifs.open("C:\\Users\\Admin\\Desktop\\text.txt");
	for (int i = 0; i < 13; i++) {
		ifs >> words[i];
	}
	
	for (int i = 0; i < 13; i++) {
		cout << words[i] << endl;
	}
	ifs.close();
	
	
	
	
	
	
	
	






}


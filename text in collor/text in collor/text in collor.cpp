

#include "pch.h"
#include <iostream>

using namespace std;
void textInColor(string color, string text) {
   
	cout << color << endl;
	
}
int main()
{
setlocale(LC_ALL, "rus");
	string color;
	cin >> color;
	color = textInColor(color);
	cout << color;











}


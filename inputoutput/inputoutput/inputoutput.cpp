// Перше  заняття.Ввід і вивід. Змінні. 

#include "pch.h"

#include <iostream>// бібліотека
#include <cmath>
using namespace std;



int main() // початок програми 
{
	     setlocale(LC_ALL, "rus");
		 cout << "Введіть швидкість " << endl;
		 float v;
		 cin >> v;
		 cout << "Введіть час" << endl;
		 float t;
		 cin >> t;
		 cout << "Відстань " <<  v*t  << "!" << endl;
		
	
} // кінець  



#include "pch.h"
#include <iostream>
#include <string>


using namespace std;
string sayHello(string name) {
	name = name + "петя";
	cout << "Hello , " << name << endl;
	return name;
}

int main()
{
	setlocale(LC_ALL, "rus");
	string name;
	cin >> name;
    name = sayHello (name);
	cout << name;









}


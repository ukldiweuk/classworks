

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Cat {
private:	
	string name;
	int age;
	double weight;
public:
	Cat() {
		name = "None";
		age = -1;
		weight = -1.0;

	}
	Cat(string name, int age, double weight) {
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	Cat(string name) {
		this->name = name;
		age = -1;
		weight = -1.0;
	}


	
	
	void sayMeow() {
		cout << name << " said meow" << endl;
	}

};





int main()
{
	setlocale(LC_ALL , "rus");
	Cat cat("Дядя Бодя", 3, 4.5);
	cat.sayMeow();
	Cat cat2("Дядя Жора", 14, 70.4);
	cat2.sayMeow();
	
	
	


}


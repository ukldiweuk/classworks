#pragma once
#include <iostream>
using namespace std;
class Book
{
private:
	string name;
	string author;
	int theYearOfPublishing;
public:
	Book();
	Book(string name, string author, int theYearOfPublishing);
	~Book();
};


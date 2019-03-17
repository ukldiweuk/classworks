#include "pch.h"
#include "Book.h"
using namespace std;

Book::Book()
{
	theYearOfPublishing = 9999;
}



Book::Book(string name, string author,int theYearOfPublishing)
{
	this->author = author;
	this->name = name;
	this->theYearOfPublishing = theYearOfPublishing;
}



Book::~Book()
{

}

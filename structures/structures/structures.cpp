

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Time{
	int year;
	int month;
	int date;
	int hour;
	int minutes;
};
struct Ticket {
	string name;
	int row;
	int seat;
	Time time;
};
string timeToString(Time t) {
	string res = to_string(t.date) + "."
		+  to_string(t.month) + "."
		+ to_string(t.hour) + "."
		+ to_string(t.minutes) + "."
		+ to_string(t.year);
	    
	return res;

}
string ticketToString(Ticket t) {
	string res = (t.name) + "."
		+ "row:" + to_string(t.row) + "."
		+ "seat:" + to_string(t.seat) + "; time:" + timeToString (t.time) ;
		

	return res;

}

void textToFile(string filename, string text) {
	ofstream fout(filename);
	fout << "Работа с файлами в С++"; // запись строки в файл
	fout.close(); // закрываем файл
	
}






int main()
{
   /* setlocale(LC_ALL , "rus");
   Time time;
   time.year = 2019;
   time.date = 12;
   time.month = 3;
   time.hour = 19;
   time.minutes = 0;

   //cout << timeToString( time) << endl;
   
  
   Ticket ticket1;
   ticket1.name = "Аквамен";
   ticket1.row = 2;
   ticket1.seat = 4;
   ticket1.time = time;
   cout << ticketToString(ticket1) << endl;
  */




   ofstream  ofs("C:\\Users\\Admin\\Desktop\\websites.txt");
   



}


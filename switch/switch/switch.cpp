
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "введіть ваш рік народження" << endl;
    int year;   
	cin >> year;
	switch ( year % 12 ) {
	case 4: {
		cout << "мавпа" << endl;
		break;
	}
    case 5: {
	cout << "бик" << endl;
	break;
	}
	case 6: {
	cout << "тигр" << endl;
	break;
	
	}
	case 7: {
	cout << "кролик" << endl;
	break;
	
	}
	case 8: {
	cout << "дракон" << endl;
	break;
	}
	case 9: {
	cout << "змія" << endl;
	break;
	}
	case 10: {
	cout << "кінь" << endl;
	break;
	}
	case 11: {
	cout << "коза" << endl;
	break;
	}

	case 1: {
	cout << "півень" << endl;
	break;
	}
	case  2: {
	cout << "собака" << endl;
	break;
	}
	case 3: {
	cout << "кабан" << endl;
	break;
	}
	
	}







}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

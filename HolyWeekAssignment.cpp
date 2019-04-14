#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	
	int monthNumber, day, year; 
	string month[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	cout << "Enter the month (use number 1-12): "; cin >> monthNumber;
		
	switch (monthNumber-1)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Enter day (use numbers 1-31): "; cin >> day;	
			break;
				
					
		case 2:
			cout << "Enter day (use numbers 1-28): "; cin >> day;
			break;
			
	
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Enter day (use numbers 1-30): "; cin >> day;
			break;
	
		default:
			cout << "You must enter a month using the numbers 1-12" << endl; 
	}
	
	cout << "Enter a valid year"; cin >> year;
	
	
	
	cout << month[monthNumber-1] << " " << day << ',' << year << endl;
	
	_getch();
	return 0;
}

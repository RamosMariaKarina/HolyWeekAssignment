#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	
	int month, day, year; 
	
	cout << "Enter the month (use number 1-12)"; cin >> month;
		
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Enter day (use numbers 1-31)"; cin >> day;
				if (day > 31)
					cout << "Invalid Day. Enter a valid day. Use only numbers from 1 to 31"; cin >> day;
				if (day < 0)
					cout << "Invalid Day. Enter a valid day. Use only numbers from 1 to 31"; cin >> day;
			break;
				
					
					
		case 2:
			cout << "Enter day (use numbers 1-28)"; cin >> day;
				if (day > 28)
					cout << "Invalid Day. Enter a valid day. Use only numbers from 1 to 28"; cin >> day;
				if (day < 0)
					cout << "Invalid Day. Enter a valid day. Use only numbers from 1 to 28"; cin >> day;
			break;
			
					
					
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Enter day (use numbers 1-30)"; cin >> day;
			if (day > 30)
				cout << "Invalid Day. Enter a valid day. Use only numbers from 1 to 30"; cin >> day;
			if (day < 0)
				cout << "Invalid Day. Enter a valid day. Use only numbers from 1 to 30"; cin >> day;
			break;
	
	
		default:
			cout << "You must enter a month using the numbers 1-12"; cin >> month;
	}
	
	cout << "Enter a valid year"; cin >> year;
	
	if (month ==1)
		month = "January";
	if (month ==2)
		month = "February";
	if (month ==3)
		month = "March";
	if (month ==4)
		month = "April";
	if (month ==5)
		month = "May";
	if (month ==6)
		month = "June";
	if (month ==7)
		month = "July";	
	if (month ==8)
		month = "August";
	if (month ==9)
		month = "September";
	if (month ==10)
		month = "October";
	if (month ==11)
		month = "November";
	if (month ==12)
		month = "December";
	cout << month << day << ',' << year << endl;
	
	_getch();
	return 0;
}

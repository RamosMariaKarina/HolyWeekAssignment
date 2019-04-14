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
		
	switch (monthNumber)
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
	}

	cout << "Enter a valid year: "; cin >> year;
	if (year <0)
		cout << "Invalid Date" << endl;
	
	// Codes for January
	if (monthNumber==1 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==1 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for February
		else if (monthNumber==2 && day >28)
		cout << "Invalid Date" << endl;
		else if (monthNumber==2 && day <0)
		cout << "Invalid Date" << endl;		
	// Codes for March
		else if (monthNumber==3 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==3 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for April
		else if (monthNumber==4 && day >30)
		cout << "Invalid Date" << endl;
		else if (monthNumber==4 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for May
		else if (monthNumber==5 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==5 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for June
		else if (monthNumber==6 && day >30)
		cout << "Invalid Date" << endl;
		else if (monthNumber==6 && day <0)
		cout << "Invalid Date" << endl;	
	// Codes for July
		else if (monthNumber==7 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==7 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for August
		else if (monthNumber==8 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==8 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for September
		else if (monthNumber==9 && day >30)
		cout << "Invalid Date" << endl;
		else if (monthNumber==9 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for October
		else if (monthNumber==10 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==10 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for November
		else if (monthNumber=11 && day >30)
		cout << "Invalid Date" << endl;
		else if (monthNumber==11 && day <0)
		cout << "Invalid Date" << endl;
	// Codes for December
		else if (monthNumber==12 && day >31)
		cout << "Invalid Date" << endl;
		else if (monthNumber==12 && day <0)
		cout << "Invalid Date" << endl;
		
		
		cout << month[monthNumber-1] << day << year << endl;	
	
	_getch();
	return 0;
}

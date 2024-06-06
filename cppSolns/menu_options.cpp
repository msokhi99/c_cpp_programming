#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_year;
	cout << "Enter the year: \n";
	cin >> user_year; 
	
	if (user_year % 4 == 0)
	{
		if (user_year % 100 == 0)
		{
			if (user_year % 400 == 0)
			{
				cout << "The year is " << user_year << " which is a leap year.";
			}
			else
			{
				cout << "The year is " << user_year << " which is not a leap year.";
			}
		}
		else
		{
			cout << "The year is " << user_year << " which is a leap year.";
		}		
	}
	else
	{
		cout << "The year is " << user_year << " which is not a leap year.";
	}
	return 0;
}

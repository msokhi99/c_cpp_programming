#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_day;
	cout << "Enter day number: ";
	cin >> user_day;
	
	if (user_day == 1)
	{
		cout << "The day is SUN.";
	}
	else if (user_day == 2)
	{
		cout << "The day is MON.";
	}
	else if (user_day == 3)
	{
		cout << "The day is TUE.";
	}
	else if (user_day == 4)
	{
		cout << "The day is WED.";
	}
	else if (user_day == 5)
	{
		cout << "The day is THU.";
	}
	else if (user_day == 6)
	{
		cout << "The day is FRI.";
	}
	else if (user_day == 7)
	{
		cout << "The day is SAT.";
	}
	else
	{
		cout << "Invalid number.";
	}
	return 0;
}

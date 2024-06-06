#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_working_hours;
	cout << "Enter your working hours: \n";
	cin >> user_working_hours;
	
	if (user_working_hours >= 9 && user_working_hours <=18)
	{
		cout << "Working hours.";
	}
	else 
	{
		cout << "Leisure hours.";
	}
	return 0;
}

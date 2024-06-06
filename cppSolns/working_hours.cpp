#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_age;
	cout << "What is your age? \n";
	cin >> user_age; 
	
	if (user_age >= 12 && user_age <= 50)
	{
		cout << "You are young.";
	}
	else 
	{
		cout << "You are not young.";
	}
	return 0;
}

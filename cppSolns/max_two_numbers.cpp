#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_num;
	cout << "Enter a number (positive or negative): \n";
	cin >> user_num; 
	
	if (user_num > 0)
	{
		cout << "The number is positive.";
	}
	else if (user_num < 0)
	{
		cout << "The number is negative.";
	}
	return 0;
}

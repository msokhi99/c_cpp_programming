#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_num;
	cout << "Enter a number (Odd or Even): \n";
	cin >> user_num;
	
	if (user_num % 2 == 0)
	{
		cout << "The number is even.";
	}
	else
	{
		cout << "The number is odd";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_num;
	cout << "Enter the number: \n";
	cin >> user_num;
	
	if (user_num == 1)
	{
		cout << "ONE.";
	}
	else if (user_num == 2)
	{
		cout << "TWO.";
	}
	else if (user_num == 3)
	{
		cout << "THREE.";
	}
	else if (user_num == 4)
	{
		cout << "FOUR.";
	}
	else if (user_num == 5)
	{
		cout << "FIVE.";
	}
	else if (user_num == 6)
	{
		cout << "SIX.";
	}
	else if (user_num == 7)
	{
		cout << "SEVEN.";
	}
	else if (user_num == 8)
	{
		cout << "EIGHT.";
	}
	else if (user_num == 9)
	{
		cout << "NINE.";
	}
	else if (user_num == 0)
	{
		cout << "ZERO.";
	}
	else
	{
		cout << "Invalid number.";
	}
	return 0;
}

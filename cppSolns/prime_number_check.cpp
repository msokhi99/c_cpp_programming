#include <iostream>

using namespace std; 

int main ()
{
	int user_num, digit;
	cout << "Enter the digits: ";
	cin >> user_num; 
	
	while (user_num > 0)
	{
		digit = user_num % 10;
		user_num = user_num / 10;
		cout << digit << " ";
	}
	return 0;
}

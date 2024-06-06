#include <iostream>

using namespace std; 

int main ()
{
	int user_num, user_dig_rev;
	int m = user_num;
	cout << "Enter a number: ";
	cin >> user_num;
	
	while (user_num > 0)
	{
		user_dig_rev = user_num % 10;
		user_num = user_num / 10;
		cout << user_dig_rev;
	}
	
	if (user_dig_rev == m)
	{
		cout << m << "Palindrome.";
	}
	else
	{
		cout << m << "Not a palindrome.";
	}
	return 0;
}

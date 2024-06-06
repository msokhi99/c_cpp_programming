#include <iostream>

using namespace std; 

int main ()
{
	int user_num, sum_factor = 0;
	cout << "Enter the number: ";
	cin >> user_num;
	
	for (int i = 1; i<user_num+1; i++)
	{
		if (user_num % i == 0)
		{
			sum_factor = sum_factor + i;
		}
	}
	
	if (user_num * 2 == sum_factor)
	{
		cout << "Perfect number.";
	}
	else
	{
		cout << "Not a perfect number.";
	}
	
	return 0;
}

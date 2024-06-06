#include <iostream>

using namespace std; 

int main ()
{
	int user_num, factors = 0;
	cout << "Enter the number: ";
	cin >> user_num; 
	
	for (int i = 1; i < user_num + 1; i++)
	{
		if (user_num % i == 0)
		{
			cout << "Factors: " << i << endl;
			factors++;
		}	
	}
	
	if (factors == 2)
	{
		cout << user_num << " is a prime number.";
	}
	else if (factors == 1 || factors > 2)
	{
		cout << user_num << " is not a prime number.";
	}
	
	return 0;
}

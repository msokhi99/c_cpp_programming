#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int num_one, num_two;
	cout << "Enter the two numbers: ";
	cin >> num_one >> num_two;
	
	if (num_one > num_two)
	{
		cout << "The maximum number is: " << num_one;
	}
	else
	{
		cout << "The maximum number is: " << num_two;
	}
	return 0;
}

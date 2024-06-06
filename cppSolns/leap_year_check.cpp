#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	float total_amount, new_amount;
	cout << "Enter the total amount: \n";
	cin >> total_amount;
	
	if (total_amount < 100.0)
	{
		cout << "No discount.";
	}
	else if (total_amount >= 100.0 && total_amount < 500.0)
	{
		new_amount = total_amount - (0.1 * total_amount);
		cout << "The new amount is " << new_amount;
	}
	else if (total_amount >= 500.0)
	{
		new_amount = total_amount - (0.2 * total_amount);
		cout << "The new amount is " << new_amount;
	}
	return 0;
}

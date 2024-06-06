#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	float bill_amount, new_bill_amount;
	cout << "Enter the total bill amount: \n";
	cin >> bill_amount;
	
	if (bill_amount >= 5000)
	{
		new_bill_amount = bill_amount - (0.2f * bill_amount);
		cout << "The new bill amount is: " << new_bill_amount;
	}
	else
	{
		if (bill_amount <= 2000 && bill_amount < 5000)
		{
			new_bill_amount = bill_amount - (0.1f * bill_amount);
			cout << "The new bill amount is: " << new_bill_amount;
		}
		else if (bill_amount < 2000)
		{
			new_bill_amount = bill_amount - (0.05f * bill_amount);
			cout << "The new bill amount is: " << new_bill_amount;
		}
	}
	
	return 0;
}

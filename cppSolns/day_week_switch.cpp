#include <iostream>
#include <cmath>
using namespace std; 

typedef float numbers;

int main ()
{	
	int user_choice;
	cout << "MENU \n";
	cout << "1. ADD \n" << "2. SUB \n" << "3. MUL \n" << "4. DIV \n";
	cin >> user_choice; 
	cout << "Enter two numbers: \n";
	
	numbers num_one, num_two; 
	
	cin >> num_one >> num_two;
	
	switch (user_choice)
	{
		case 1: cout << num_one + num_two;
			break;
		case 2: cout << num_one - num_two;
			break;
		case 3: cout << num_one * num_two;
			break;
		case 4:
			
			if (num_two == 0)
			{
				cout << "Cannot divide by 0.";
			}
			else
			{
				cout << num_one / num_two;
			}
			
			break;
	}	
		
	return 0;
}

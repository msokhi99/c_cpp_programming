#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int user_choice, factorial = 1;
	cout << "Enter the number: ";
	cin >> user_choice; 
	
	for (int i = user_choice; i> 0; i--)
	{
		factorial = i * factorial;
	}
	
	cout << factorial;
	return 0;
}

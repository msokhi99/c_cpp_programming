#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int user_choice, total_sum = 0; 
	cout << "Enter the number: ";
	cin >> user_choice; 
	
	for (int i = 1; i <= user_choice; i++)
	{
		total_sum = total_sum + i;
	}
	
	cout << "The total sum is: " << total_sum;
	return 0;
}

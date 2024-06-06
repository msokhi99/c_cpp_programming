#include <iostream>
#include <cmath>
using namespace std; 

typedef int numbers;
int main ()
{	
	int max_num = 0;
	numbers num_one, num_two, num_three;
	cout << "Enter three numbers: \n";
	cin >> num_one >> num_two >> num_three;
	
	if (num_one > num_two && num_one > num_three)
	{
		max_num = num_one;
		cout << max_num;
	}
	else if (num_two > num_three)
	{
		max_num = num_two;
		cout << max_num;
	}
	else
	{
		max_num = num_three;
		cout << max_num;
	}
	return 0;
}

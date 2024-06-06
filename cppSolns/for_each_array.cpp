#include <iostream>

using namespace std; 

int main ()
{
	int A[] = {2,4,6,8,10};
	int sum = 0;
	
	for (auto x:A)
	{
		sum = sum + x;
	}
	
	cout << "The total sum is: " << sum;
}

#include <iostream>

using namespace std; 

int main ()
{
	int A[5] = {5,8,10,4,2};
	int max = A[0];
	
	for (auto x:A)
	{
		if (x > max)
		{
			max = x;
		}
	}
	
	cout << "The maximum number is: " << max;

	
	return 0;	
}

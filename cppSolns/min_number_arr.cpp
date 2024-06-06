#include <iostream>

using namespace std; 

int main ()
{
	int arr[] = {50, 34, 23, 56, 70, 53};
	int min = arr[0];
	
	for (auto x:arr)
	{
		if (x < min)
		{
			min = x;
		}
	}
	
	cout << "The smallest number is: " << min;
	return 0;
}

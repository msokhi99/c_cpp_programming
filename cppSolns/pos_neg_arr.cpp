#include <iostream>

using namespace std; 

int main()
{
	int arr[] = {34, -4, 23, -65, 100, -3, -56, 4, 5, 6};
	int pos = 0;
	int neg = 0;
	
	for(auto x:arr)
	{
		if (x > 0)
		{
			pos++;
		}
		else
		{
			neg++;
		}
	}
	
	cout << "Total positive numbers: " << pos << endl;
	cout << "Total negative numbers: " << neg << endl;
	
	return 0;
}

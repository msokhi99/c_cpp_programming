#include <iostream>

using namespace std; 

int main ()
{
	int dim;
	cout << "Enter the dimensions: ";
	cin >> dim;
	cout << endl; 
	
	for (int i = 1; i <= dim; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	
	return 0;
}

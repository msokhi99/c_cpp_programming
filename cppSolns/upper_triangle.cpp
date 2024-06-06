#include <iostream>

using namespace std; 

int main ()
{
	int dim;
	cout << "Enter the dimension: ";
	cin >> dim;
	cout << endl;
	
	for (int i = 1; i <= dim; i++)
	{
		for (int j = 1; j <= dim; j++)
		{
			if (i <= j)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	return 0;
}

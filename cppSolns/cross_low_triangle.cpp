#include <iostream>

using namespace std; 

int main ()
{
	int dim;
	cout << "Enter the dimension: ";
	cin >> dim;
	cout << endl;
	
	for (int i = 0; i < dim; i++)
	{
		for (int j = 0; j < dim; j++)
		{
			if (i + j >= dim - 1)
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

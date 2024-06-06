#include <iostream>

using namespace std; 
typedef int dim;

int main ()
{
	dim dim_one, dim_two;
	int arr_total = 0;
	float arr_average;
	cout << "Enter the first dimension: ";
	cin >> dim_one;
	cout << "Enter the second dimension: ";
	cin >> dim_two; 
	
	float arr_A[dim_one-1][dim_two-1];
	
	cout << "Enter the numbers of the array: ";
	
	for (int i = 0; i <= dim_one-1; i++)
	{
		for (int j = 0; j <= dim_two-1; j++)
		{
			cin >> arr_A[i][j];	
		}
		cout << endl;	
	}
	cout << endl;
	
	for (int k = 0; k <= dim_one-1; k++)
	{
		for (int l = 0; l <= dim_two-1; l++)
		{
			arr_total = arr_total + arr_A[k][l];	
		}	
	}
	cout << endl;
	
	arr_average = arr_total / (dim_one * dim_two);
	cout << "The average of the elements in the array is: " << arr_average;
	
	return 0;	
}

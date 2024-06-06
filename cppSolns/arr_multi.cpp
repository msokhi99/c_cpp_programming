#include <iostream>

using namespace std; 
typedef int dim;
int main ()
{
	dim dim_one, dim_two, dim_three, dim_four;
	cout << "Enter the dimensions of the first matrice: \n";
	cin >> dim_one >> dim_two;
	cout << "Enter the dimensions of the second matrice: \n";
	cin >> dim_three >> dim_four;
	
	while (dim_two != dim_three)
	{
		cout << "These dimensions cannot be multiplied.";
		break;
	}
	
	int arr_A[dim_one-1][dim_two-1];
	int arr_B[dim_three-1][dim_four-1];
	int arr_C[dim_one-1][dim_four-1] = {0};
	cout << "Enter the numbers for the first matrice: \n";
	
	for (int i = 0; i <= dim_one-1; i++)
	{
		for (int j = 0; j <= dim_two-1; j++)
		{
			cin >> arr_A[i][j];
		}
		cout << endl;
	}
	
	cout << "Enter the numbers for the second matrice: \n";
	
	for (int k = 0; k <= dim_three-1; k++)
	{
		for (int l = 0; l <= dim_four-1; l++)
		{
			cin >> arr_B[k][l];
		}
		cout << endl;
	}
	
	for (int m = 0; m <= dim_one-1; m++)
	{
		for (int n = 0; n <= dim_four-1; n++)
		{
			for (int k = 0; k < dim_two-1; k++)
			{
				arr_C[m][n] = arr_C[m][n] + (arr_A[m][n] * arr_B[k][n]);
			}
		}
	}
	
	cout << "Output Matrix: " << endl;
	
	for (int q = 0; q <= dim_one - 1; q++)
	{
		for (int r = 0; r <= dim_four - 1; r++)
		{
			cout << arr_C[q][r] << " ";
		}
		cout << endl;
	}
		
	return 0;		
}

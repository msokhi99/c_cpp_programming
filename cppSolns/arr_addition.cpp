#include <iostream>

using namespace std; 

int main ()
{
	int arr_A [2][3] = {{1,2,3},{4,5,6}};
	int arr_B [2][3] = {{7,8,9},{10,11,12}};
	int arr_C [2][3];
	
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			arr_C[i][j] = arr_A[i][j] + arr_B[i][j];
			cout << arr_C[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

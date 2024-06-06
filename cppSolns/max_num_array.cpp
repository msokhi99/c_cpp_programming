#include <iostream>

using namespace std; 

int main ()
{	
	int total_num;
	cout << "Total numbers: ";
	cin >> total_num;
	
	int arr[total_num];
	cout << "Enter the numbers: \n";
	
	for (int i = 0; i <= total_num; i++)
	{
		cin >> arr[i];
	}
	
	int user_key; 
	cout << "Enter the key: ";
	cin >> user_key;
	
	for (int j = 0; j<= total_num; j++)
	{
		if (arr[j] == user_key)
		{
			cout << "The key has been found succesfully.";
		}
	}
	
	return 0;	
}

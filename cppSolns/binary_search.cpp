#include <iostream>
#include <cmath>

using namespace std; 

int main ()
{	
	int user_num;
	cout << "Enter total numbers: ";
	cin >> user_num;
	
	cout << "Enter all the numbers in ascending order (seperate by space): \n";
	
	int arr[user_num];
	for (int i = 0; i <= user_num - 1; i++)
	{
		cin >> arr[i];
	}
	for (auto x:arr)
	{
		cout << x << " ";
	}
	
	int arr_low = 0;
	int arr_high = user_num - 1;
	
	int user_key;
	cout << "Enter the user key: ";
	cin >> user_key;
	
	while (arr_low <= arr_high)
	{	
		int arr_mid = floor((arr_high + arr_low) / 2);
		if (user_key == arr[arr_mid])
		{
			cout << "Key found succesfully.";
			return 0;
		}
		else if (arr[arr_mid] < user_key)
		{
			arr_low = arr_mid + 1;
		}
		else
		{
			arr_high = arr_mid + 1;
		}
	}
	
	cout << "Key not found.";
	
	return 0;	
}

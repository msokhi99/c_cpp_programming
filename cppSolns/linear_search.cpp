#include <iostream>
#include <cmath>

using namespace std; 

int main ()
{	
	int total_num;
	cout << "Enter the total numbers: ";
	cin >> total_num;
	
	int arr[total_num];
	int arr_low = 0;
	int arr_high = total_num;
	int arr_mid = floor((arr_high - arr_low) / 2);
	
	cout << "Enter all the numbers: \n";
	
	for (int i = 0; i <= total_num; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Current low: " << arr_low << endl;
	cout << "Current high: " << arr_high << endl;
	cout << "Current mid-point: " << arr_mid << endl;
	
	int user_key;
	cout << "Enter the key: ";
	cin >> user_key;
	
	for (int j = 0; j <= total_num; j++)
	{
		if (arr_mid == user_key || arr_mid == arr_low)
		{
			cout << "The key has been found.";
		}
		else if (arr_mid < user_key)
		{
			arr_low = arr_mid + 1;
			arr_mid = floor((arr_high - arr_low) / 2);
		}
		else if (arr_mid > user_key)
		{
			arr_high = arr_mid - 1;
			arr_mid = floor((arr_high - arr_low) / 2);
		}
		
	}
	
	return 0;	
}

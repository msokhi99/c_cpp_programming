#include <iostream>
using namespace std; 

int linear_search (int f_user_key, int f_user_arr[], int f_arr_size)
{
    for (int j=0; j<f_arr_size; j++)
    {
        if (f_user_arr[j] == f_user_key)
        {
            return j;
        }
    }
    return 0;
}

int main ()
{   
    int arr_size;
    cout << "Enter the size of the array: ";
    cin >> arr_size; 

    int arr_a[arr_size];
    cout << "Enter the elements of the array: ";
    
    for (int i=0; i<arr_size; i++)
    {
        cin >> arr_a[i];
    }

    int user_key;
    cout << "Enter the user key: ";
    cin >> user_key; 

    int index_val = linear_search(user_key, arr_a, arr_size);
    cout << "The key has been found at index: " << index_val;
    return 0;
}
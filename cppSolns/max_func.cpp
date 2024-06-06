#include <iostream> 

using namespace std; 
typedef int user_numbers;

int max_num (int num_one, int num_two, int num_three)
{   
    int max = 0;
    if (num_one > num_two && num_one > num_three)
    {
        max = num_one;
    }
    else if (num_two > num_one && num_two > num_three)
    {
        max = num_two;
    }
    else
    {
        max = num_three;
    }
    return max;
}

int main ()
{
    user_numbers num_one, num_two, num_three; 
    cout << "Enter the first number (int.): ";
    cin >> num_one;
    cout << endl;
    cout << "Enter the second number (int.): ";
    cin >> num_two;
    cout << endl;
    cout << "Enter the third number (int.): ";
    cin >> num_three;
    cout << endl;

    int user_max = max_num (num_one, num_two, num_three);

    cout << "The max number is: " << user_max << endl;
    return 0;
}
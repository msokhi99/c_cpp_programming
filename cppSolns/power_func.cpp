#include <iostream>

using namespace std; 
typedef int user_numbers;

int pow_of (int num_one, int num_two)
{
    int result = num_one;
    ;
    for (int i=1; i<num_two; i++)
    {
        result = result * num_one;
    }
    return result;
}
int main ()
{   
    user_numbers num_one, num_two; 

    cout << "Enter the first number: ";
    cin >> num_one; 
    cout << "Enter the second number: ";
    cin >> num_two;

    int user_result = pow_of(num_one, num_two);
    cout << "The result is: " << user_result << endl;

    return 0;
}
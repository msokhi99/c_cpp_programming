#include <iostream>

using namespace std; 
typedef float user_numbers;

float add_numbers(float num_one, float num_two)
{
    float add_result;
    add_result = num_one + num_two;
    return add_result;
}
int main ()
{
   user_numbers num_one, num_two;
   cout << "Enter the first number: ";
   cin >> num_one;
   cout << endl;
   cout << "Enter the second number: ";
   cin >> num_two;
   cout << endl;

   float add_result = add_numbers(num_one, num_two); 

   cout << "The result is: " << add_result << endl;
   return 0;
}

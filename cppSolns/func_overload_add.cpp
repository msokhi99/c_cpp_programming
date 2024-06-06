#include <iostream>

using namespace std; 

int add_num(int num_one, int num_two)
{
    int result = num_one + num_two;
    return result; 
}

float add_num(float num_one, float num_two)
{
    float result = num_one + num_two;
    return result;
}

int add_num(int num_one, int num_two, int num_three)
{
    int result = num_one + num_two + num_three;
    return result;
}

int main ()
{   
    cout << "FUNCTION OVERLOADING:" << endl; 

    cout << add_num(10,10) << endl;
    cout << add_num(10.5f,10.5f) << endl;
    cout << add_num(10,10,10) << endl;
    return 0;
}

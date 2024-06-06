#include <iostream>

using namespace std;

template <class T>
T max_num (T num_one, T num_two)
{
    if (num_one > num_two)
    {
        return num_one;
    }
    else
    {
        return num_two;
    }
}

int main ()
{   
    cout << "The maximum number is: " << max_num(10,15) << endl;
    cout << "The maximum number is: " << max_num(10.5f,15.5f) << endl;
    return 0;
}
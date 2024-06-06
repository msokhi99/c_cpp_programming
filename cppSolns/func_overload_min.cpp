#include <iostream>

using namespace std;

int min_num(int num_one, int num_two)
{
    int min = 0;
    if (num_one < num_two)
    {
        min = num_one;
    }
    else
    {
        min = num_two;
    }
    return min;
}

int min_num(int num_one, int num_two, int num_three)
{
    int min = 0;
    if (num_one < num_two && num_one < num_three)
    {
        min = num_one;
    }
    else if (num_two < num_one && num_two < num_three)
    {
        min = num_two;
    }
    else
    {
        min = num_three;
    }
    return min;
}

float min_num(float num_one, float num_two)
{
    float min = 0.0;
    if (num_one < num_two)
    {
        min = num_one;
    }
    else
    {
        min = num_two;
    }
    return min;
}

int main ()
{     
    cout << "FUNCTION OVERLOADING:" << endl;
    cout << min(5,10) << endl;
    cout << min(5,10,15) << endl;
    cout << min(5.34f,10.56f) << endl;
    return 0;
}
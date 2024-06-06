#include <iostream>
#include <string>
using namespace std; 

int main ()
{   
    string user_string = "MADAM";
    string comp_string;

    int len = (int) user_string.length();

    comp_string.resize (len);

    for (int i=0, j=len-1; i<len; i++, j--)
    {   
        comp_string[i] = user_string[j];
    }

    comp_string[len] = '\0';

    cout << user_string << endl;
    cout << comp_string << endl;

    if (user_string.compare(comp_string) == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
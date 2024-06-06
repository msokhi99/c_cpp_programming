#include <iostream>
#include <string> 
using namespace std;

int main ()
{
    string user_string;
    cout << "Enter a word: " << endl;
    getline (cin, user_string);

    for (int i=0; i<user_string.length(); i++)
    {
        user_string[i] = user_string[i]+32;
    }

    cout << user_string << endl;
    return 0;
}
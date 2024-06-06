#include <iostream>
#include <string>
using namespace std; 

int main ()
{
    string user_email;
    cout << "Enter your email: ";
    getline (cin, user_email);
    cout << "Your email is: " << user_email << endl;
    cout << "Your user name is: " << endl;

    for (int i=0; user_email[i]!='@'; i++)
    {
        cout <<user_email[i];
    }
    return 0;
}
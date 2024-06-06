#include <iostream>
#include <string>
using namespace std; 

int main ()
{
    string user_string;
    cout << "Enter a string: ";
    getline (cin, user_string);

    int num_words;
    num_words = user_string.length();
    cout << "The total number of words is: " << num_words << endl;

    int num_const = 0;
    int num_vowel = 0;
    int num_space = 0;
    for (int i=0; user_string[i] != '\0'; i++)
    {   
        if (user_string[i] == 'a' || user_string[i] == 'e' || user_string[i] == 'i' || user_string[i] == 'o' || user_string[i] == 'u')
        {
            num_vowel++;
        }
        else if (user_string[i] == ' ')
        {
            num_space++;
        }
        else
        {
            num_const++;
        }
    }
    cout << "The total number of vowels is: " << num_vowel << endl;
    cout << "The total number of constants is: " << num_const << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std; 

int main ()
{	
	int user_num;
	cout << "Enter a number: \n";
	cin >> user_num;
	
	switch (user_num)
	{
		case 1: cout << "SUN.";
			break;
		case 2: cout << "MON.";
			break;
		case 3: cout << "TUE.";
			break;
		case 4: cout << "WED.";
			break;
		case 5: cout << "THU.";
			break;
		case 6: cout << "FRI.";
			break;
		case 7: cout << "SAT.";
			break;
	}
	
	return 0;
}

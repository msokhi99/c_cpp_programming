#include <iostream>
#include <cmath>
using namespace std; 

typedef float var;
int main ()
{	
	var a,b,c,d;
	cout << "Enter the values for a,b and c: \n";
	cin >> a >> b >> c;
	
	d = (b * b) - (4 * a * c);
	
	if (d == 0)
	{
		cout << "The discriminant is " << d << " which is real and equal.";
	}
	else if (d > 0)
	{
		cout << "The discriminant is " << d << " which is real and unequal.";
	}
	else if (d < 0)
	{
		cout << "The discriminant is " << d << " which is imaginary.";
	}
	return 0;
}

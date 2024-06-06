#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	float CirR, CirA;
	cout << "Enter the radius of the circle : \n";
	cin >> CirR;
	
	CirA = 3.1425f * (CirR * CirR);
	
	cout << "The area of the circle is: " << CirA;
	return 0;

}

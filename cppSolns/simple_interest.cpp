#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	float CylR, CylH, CylA;
	cout << "Enter the radius of the cylinder: ";
	cin >> CylR; 
	cout << "Enter the height of the cylinder: ";
	cin >> CylH; 
	
	CylA = 3.1425f * (CylR * CylR) * CylH;
	
	cout << "The area of the cylinder is: " << CylA;
	return 0;

}

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	float TriH, TriB, AreaT;
	cout << "Enter the height of the triangle: \n";
	cin >> TriH;
	cout << "Enter the base of the triangle: \n";
	cin >> TriB; 
	
	AreaT = 0.5 * (TriH * TriB);
	cout << "The area of the triangle is: " << AreaT;
	return 0;
}

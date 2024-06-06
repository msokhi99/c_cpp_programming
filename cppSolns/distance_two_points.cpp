#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	float XFirst, XSecond, YFirst, YSecond, Distance;
	cout << "Enter the coords of the first point (x1,y1): ";
	cin >> XFirst >> YFirst;
	cout << "Enter the coords of the second point (x2, y2): "; 
	cin >> XSecond >> YSecond; 
	
	Distance = sqrt(((XSecond - XFirst) * (XSecond - XFirst)) + ((YSecond - YFirst) * (YSecond - YFirst)));
	
	cout << "The distance is: " << Distance;

	return 0;

}

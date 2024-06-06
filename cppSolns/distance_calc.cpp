#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	float PriAmount; 
	float Time; 
	float RateInt;
	float SimpleInt; 
	
	cout << "Enter the principle amount: ";
	cin >> PriAmount; 
	cout << "Enter the time: ";
	cin >> Time;
	cout << "Enter the interest rate: ";
	cin >> RateInt;
	
	SimpleInt = (PriAmount * Time * RateInt) / 100.0; 
	
	cout << "The simple interest is: " << SimpleInt;
	
	return 0;

}

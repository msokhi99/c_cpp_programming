#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	float BasicSalary, PerAllowance, PerDeduction, NetSalary;
	cout << "Enter your basic salary: ";
	cin >> BasicSalary;
	cout << "Enter your percentage of allowances: ";
	cin >> PerAllowance;
	cout << "Enter your percentage of deductions: ";
	cin >> PerDeduction; 
	
	NetSalary = BasicSalary + (BasicSalary * (PerAllowance/100)) - (BasicSalary * (PerDeduction/100));
	cout << "Your net salary is: " << NetSalary;
	return 0;
}

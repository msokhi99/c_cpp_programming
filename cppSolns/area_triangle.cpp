#include <iostream>
#include <cmath>
using namespace std; 

int main()
{	
	int VarA, VarB, VarC;
	float RootsVarPos, RootsVarNeg; 
	cout << "Enter the values of variables A,B and C: \n";
	cin >> VarA >> VarB >> VarC; 
	
	RootsVarPos = (-VarB + sqrt((VarB * VarB) - 4 * VarA * VarC)) / (2 * VarA);
	RootsVarNeg = (-VarB - sqrt((VarB * VarB) - 4 * VarA * VarC)) / (2 * VarA);
	
	cout << "The Roots are: " << RootsVarPos << " and " << RootsVarNeg;
	
	return 0;

}

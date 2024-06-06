#include <iostream>

using namespace std; 

int main ()
{
	int arr_A[] = {2,4,6,8,10,12};
	int *p = arr_A; 
	p++;
	cout << "Pointer has been moved to the next address location " << &p << " of the array which is: " << *p << endl;
	p = p + 3;
	cout << "Pointer has been moved to the next address location " << &p << " of the array which is: " << *p << endl;
	
	cout << p[-4];
	
	delete []p;
	p = nullptr;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std; 

typedef float student_marks;
int main ()
{	
	float avg_marks;
	student_marks sub_one, sub_two, sub_three;
	cout << "Enter the marks for the three subjects: \n";
	cin >> sub_one >> sub_two >> sub_three;
	avg_marks = (sub_one + sub_two + sub_three) / 3.0;
	
	if (avg_marks >= 60.0)
	{
		cout << "Your average is " << avg_marks << " and the grade is A.";
	}
	else
	{
		if (avg_marks <= 35.0 && avg_marks < 60.0)
		{
			cout << "Your average is " << avg_marks << " and the grade is B.";
		}
		else if (avg_marks < 35.0)
		{
			cout << "Your average is " << avg_marks << " and the grade is C.";
		}
	}
	
	return 0;
}

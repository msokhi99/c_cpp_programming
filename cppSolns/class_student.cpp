#include <iostream> 
#include <string>
class student 
{
    private:
    
        int roll_num;
        std::string name;
        int marks_sub_one;
        int marks_sub_two;
        int marks_sub_three;
    
    public: 

        student ();
        void set_roll_num (int roll_num);
        void set_name (std::string name);
        void set_marks (int mark_one, int mark_two, int mark_three);
        int get_roll_num ();
        std::string get_name ();
        int get_mark_one ();
        int get_mark_two ();
        int get_mark_three ();
        int total_marks ();
        char grade ();
};

int main ()
{   
    student s1;
    s1.set_roll_num (15);
    s1.set_name("Mantej");
    s1.set_marks(40, 50, 10);
    std::cout << "Roll number: " << s1.get_roll_num() << "\n";
    std::cout << "Mark 1: " << s1.get_mark_one() << "\n";
    std::cout << "Mark 2: " << s1.get_mark_two() << "\n";
    std::cout << "Mark 3: " << s1.get_mark_three() << "\n";
    std::cout << "Total Marks: " << s1.total_marks() << "\n";
    std::cout << "Grade achieved: " << s1.grade() << "\n";
    return 0;
}

student::student ()
{
    roll_num = 1;
    name = "Test";
    marks_sub_one = 1;
    marks_sub_two = 1;
    marks_sub_three = 1;
}

void student::set_roll_num (int roll_num)
{
    if (roll_num < 0)
    {
        roll_num = 1;
    }
    else
    {
        this -> roll_num = roll_num;
    }
}

void student::set_name (std::string name)
{
    this -> name = name;
} 

void student::set_marks (int mark_one, int mark_two, int mark_three)
{
    if (mark_one < 0)
    {
        this -> marks_sub_one = 1;
    }
    else
    {
        this -> marks_sub_one = mark_one;
    }

    if (mark_two < 0)
    {
        this -> marks_sub_two = 1;
    }
    else
    {
        this -> marks_sub_two = mark_two;
    }

    if (mark_three < 0)
    {
        this -> marks_sub_three = 1;
    }
    else
    {
        this -> marks_sub_three = mark_three;
    }
}

int student::get_roll_num ()
{
    return this -> roll_num;
}

std::string student::get_name ()
{
    return this -> name;
}

int student::get_mark_one ()
{
    return this -> marks_sub_one;
}

int student::get_mark_two ()
{
    return this -> marks_sub_two;
}

int student::get_mark_three ()
{
    return this -> marks_sub_three;
}

int student::total_marks ()
{
    int total;
    total = marks_sub_one + marks_sub_two + marks_sub_three;
    return total;
}

char student::grade ()
{
    float average = total_marks () / 3;
    if (average > 60)
    {
        return 'A';
    }
    else if (average >=40 && average<60)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
}


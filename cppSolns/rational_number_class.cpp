#include <iostream> 

class rational_number
{
    private:
    int rat_num;
    int rat_denum;

    public: 
    rational_number (int num = 0, int denum = 0)
    {
        this -> rat_num = num;
        this -> rat_denum = denum;      
    }
    rational_number (rational_number &r)
    {
        this -> rat_num = r.rat_num;
        this -> rat_denum = r.rat_denum;
    }
    void set_rat_num (int num)
    {
        if (num < 0)
        {
            this -> rat_num = 1;
        }
        else
        {
            this -> rat_num = num;
        }
    }
    void set_rat_denum (int denum)
    {
        if (denum < 0)
        {
            this -> rat_denum = 1;
        }
        else
        {
            this -> rat_denum = denum;
        }
    }
    int get_rat_num ()
    {
        return this -> rat_num;
    }
    int get_rat_denum ()
    {
        return this -> rat_denum;
    }
    rational_number operator+ (rational_number num_one)
    {
        rational_number temp;
        temp.rat_num = rat_num * num_one.rat_denum + num_one.rat_num * rat_denum;
        temp.rat_denum = rat_denum * num_one.rat_denum;
        return temp;
    }
    friend std::ostream & operator<< (std::ostream &os, rational_number &result);

};

std::ostream & operator<< (std::ostream &os, rational_number &result)
{
    os << result.get_rat_num () << " - " << result.get_rat_denum ();
    return os;
}


int main ()
{   
    rational_number r1(10,5);
    rational_number r2(3,7);
    rational_number r3;
    r3 = r1 + r2;
    std::cout << r3;
    return 0;
}
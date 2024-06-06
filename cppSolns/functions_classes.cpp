#include <iostream> 

class matrix 
{
    private:
    int a_size_one;
    int a_size_two;

    public:
    matrix (int size_one = 0, int size_two = 0)
    {
        this -> a_size_one = size_one;
        this -> a_size_two = size_two;
    }

    void set_size (int size_one, int size_two)
    {
        this -> a_size_one = size_one;
        this -> a_size_two = size_two;
    }

    int get_size_one ()
    {
        return this -> a_size_one;
    }

    int get_size_two ()
    {
        return this -> a_size_two;
    }

    friend std::istream & operator>> (std::istream &is, matrix &a);

    int ** get_elements ()
    {
        int ** p = new int * [a_size_one];

        for (int i=0; i<a_size_one; i++)
        {
            p[i] = new int [a_size_two];
        }

        std::cout << "Please enter elements for Matrix: \n";
        for (int i=0; i<a_size_one; i++)
        {
            for (int j=0; j<a_size_two; j++)
            {
                std::cin >> p[i][j];
            }
        }
        std::cout << "\n";
        std::cout << "Elements you entered: \n";

        for (int i=0; i<a_size_one; i++)
        {
            for (int j=0; j<a_size_two; j++)
            {
                std::cout << p[i][j] << " ";
            }
            std::cout << "\n";
        }
        return p;
    }

    void add_mat (int ** mat_a, int ** mat_b, matrix &a, matrix &b)
    {   
        int ** p = new int * [a.get_size_one()];
        
        for (int i=0; i<a_size_one; i++)
        {
            p[i] = new int [a_size_two];
        }

        for (int i=0; i<a_size_one; i++)
        {
            for (int j=0; j<a_size_two; j++)
            {
                p[i][j] = mat_a[i][j] + mat_b[i][j];
            }
        }

        for (int i=0; i<a_size_one; i++)
        {
            for (int j=0; j<a_size_two; j++)
            {
                std::cout << p[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

};

std::istream & operator>> (std::istream &is, matrix &a)
{
    int size_one;
    int size_two;
    is >> size_one >> size_two;
    a.set_size(size_one, size_two);
    return is;
}

int main ()
{   
    matrix matrix_a, matrix_b, matrix_c;
      
    std::cout << "Enter the dimensions of the first matrix: \n";
    std::cin >> matrix_a;
    std::cout << "Enter the dimensions of the second matrix: \n";
    std::cin >> matrix_b;
    int ** mat_a = matrix_a.get_elements();
    int ** mat_b = matrix_b.get_elements();
    matrix_c.set_size(matrix_a.get_size_one(), matrix_b.get_size_two());
    matrix_c.add_mat (mat_a, mat_b, matrix_a, matrix_b);
    return 0;
}
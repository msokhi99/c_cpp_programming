#include<iostream> 

template<class T,class U>
class calculator;

template<class T,class U>
class calculator{
    private:
    T numOne;
    U numTwo;

    public:
    calculator(T numOne=0,U numTwo=0);
    void setNums(T,U);
    auto addNums();
    auto subNums();
};

template<class T,class U>
calculator<T,U>::calculator(T numOne, U numTwo){
    this->numOne=numOne;
    this->numTwo=numTwo;
}
template<class T, class U>
void calculator<T,U>::setNums(T numOne, U numTwo){
    this->numOne=numOne;
    this->numTwo=numTwo;
}
template<class T,class U>
auto calculator<T,U>::addNums(){
    std::cout<<"Addition Result: "<<this->numOne+this->numTwo<<"\n";
}
template<class T,class U>
auto calculator<T,U>::subNums(){
    std::cout<<"Subtraction Result: "<<this->numOne-this->numTwo<<"\n";
}

int main(){
    calculator<int,int> calOne;
    calOne.setNums(10,10);
    calOne.addNums();
    calOne.subNums();
    return 0;
}
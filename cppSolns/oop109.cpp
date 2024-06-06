#include<iostream>
#include<string>

class person;
class person{
    private:
    std::string name;
    int age;

    public:
    person(std::string name="Test",int age=0);
    person(std::string &name,int age=10);
    void display();
    
};

person::person(std::string name,int age){
    this->name=name;
    this->age=age;
}

person::person(std::string &name, int age){
    this->name=name;
    this->age=age;
}

void person::display(){
    std::cout<<"NAME: "<<this->name<<" "<<"AGE: "<<this->age<<"\n";
}

int main(){
    person p1("Alice");
    p1.display();
    return 0;
}
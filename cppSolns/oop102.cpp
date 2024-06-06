#include <iostream> 
#include <string>
class car;

class car{
    private:
    std::string carModel;
    int carYear;

    public:
    car(std::string carModel="Test", int carYear=2000){
        this->carModel=carModel;
        this->carYear=carYear;
    }
    void setCarName(std::string carModel){
        this->carModel=carModel;
    }
    std::string getCarName(){
        return this->carModel;
    }
    void setCarYear(int carYear){
        this->carYear=carYear;
    }
    int getCarYear(){
        return this->carYear=carYear;
    }
    void printDetails(){
        std::cout<<"Car Model: "<<this->carModel<<" Car Year: "<<this->carYear<<"\n";
    }
};

int main(){
    car carOne, carTwo;
    carOne.setCarName("BMW X1");
    carOne.setCarYear(2024);
    carTwo.setCarName("BMW X2");
    carTwo.setCarYear(2024);
    carOne.printDetails();
    carTwo.printDetails();
    return 0;
}
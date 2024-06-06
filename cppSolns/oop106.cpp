#include<iostream> 

template<class T,class U>
class rectangle;

template<class T,class U>
class rectangle{
    private:
    T length;
    U breadth;

    public:
    rectangle(T length=0, U breadth=0){
        this->length=length;
        this->breadth=breadth;
    }
    void setLength(T length){
        this->length=length;
    }
    void setBreadth(U breadth){
        this->breadth=breadth;
    }
    T getLength(){
        return this->length;
    }
    U getBreadth(){
        return this->breadth;
    }
    auto areaRect(){
        return this->length*this->breadth;
    }
};

int main(){
    rectangle<float,float> rectOne;
    rectOne.setLength(15.5);
    rectOne.setBreadth(20.2);
    std::cout<<"Area of rectangle: "<<rectOne.areaRect()<<"\n";
    return 0;
}
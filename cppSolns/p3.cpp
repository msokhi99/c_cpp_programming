#include <iostream>

void areaCircle(float x,float y){
    std::cout<<"The area of the circle is: "<<x*(y*y)<<"\n";
}

int main(){
    float radius=2.57f;
    float const PI=3.1416;
    areaCircle(PI,radius);
}
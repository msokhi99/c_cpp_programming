#include <iostream>

float circumferenceCircle(float, float);

float circumferenceCircle(float x, float y){
    float tempResult=(2*x)*y;
    return tempResult;
}

int main(){
    float radiusOfCircle=2.57f;
    const float pi=3.1416f;
    float circumOfCircle=circumferenceCircle(radiusOfCircle,pi);
    std::cout<<"Circumference of the circle with radius "<<radiusOfCircle<<" is "<<circumOfCircle<<"\n";
}
#include <iostream>

void areaRect(float x, float y){
    std::cout<<"Area of rectangle: "<<x*y<<"\n";
}
void perRect(float x, float y){
    std::cout<<"Perimeter of rectangle: "<<2*(x+y)<<"\n";
}

int main(){
    float widthRect=3.5f;
    float lenRect=5.48f;
    areaRect(widthRect,lenRect);
    perRect(widthRect,lenRect);
    return 0;
}
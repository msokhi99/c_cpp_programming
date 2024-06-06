#include<iostream>

void conversion(float x){
    std::cout<<x<<" fahrenheit in celsius is: "<<(x-(float(32)))*((5.0f/9))<<" celsius.\n";
}

int main(){
    float faren=86.5f;
    conversion(faren);
    return 0;
}
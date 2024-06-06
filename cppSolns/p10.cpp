#include<iostream>
#include<limits>

int main(){
    std::cout<<"Min Limit for a char: "<<SCHAR_MIN<<" bytes.\n";
    std::cout<<"Max Limit for a char: "<<SCHAR_MAX<<" bytes.\n";
    std::cout<<"Min Limit for an integer: "<<INT_MIN<<" bytes.\n";
    std::cout<<"Max Limit for an integer: "<<INT_MAX<<" bytes.\n";
    std::cout<<"Min Limit for a long integer: "<<LONG_MIN<<" bytes.\n";
    std::cout<<"Max Limit for a long integer: "<<LONG_MAX<<" bytes.\n";
    std::cout<<"Min Limit for a small integer: "<<SHRT_MIN<<" bytes.\n";
    std::cout<<"Max Limit for a small integer: "<<SHRT_MAX<<" bytes.\n"; 
    return 0;
}
#include <iostream>

void farenToCelsius(float farenTemp){
    std::cout<<"Farenheit temperature: "<<farenTemp<<" converted to degree temperature is: "<<(float(5.0f/9))*(farenTemp-32.0f)<<" degree celsius.\n";
}

int main(){

    farenToCelsius(98.6f);
    return 0;
}
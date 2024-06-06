#include <iostream>

void minsInAYear(int x, int y, int z){
    std::cout<<"Number of mins in a year: "<<x*y*z<<"\n";
}

int main(){
    int const daysInAYear=365;
    int const hoursInADay=24;
    int const minsInAHour=60;
    minsInAYear(daysInAYear,hoursInADay,minsInAHour);
    return 0;
}
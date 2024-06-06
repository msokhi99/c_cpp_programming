#include<iostream>

void calAvg(float,float,float,float);

void calAvg(float numOne, float numTwo, float numThree, float numFour){
    std::cout<<"Average: "<<(numOne+numTwo+numThree+numFour)/4;
}

int main(){
    calAvg(32.6f,55.2f,67.9f,48.6f);
    return 0;
}
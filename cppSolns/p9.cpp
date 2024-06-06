#include<iostream> 

struct vector{
    int xCord, yCord;
};

void calSlope(vector V1,vector V2){
    float result=float((V2.yCord-V1.yCord))/(V2.xCord-V1.xCord);
    std::cout<<"Slope is: "<<result<<"\n";
}

int main(){
    vector vOne;
    vector vTwo;
    vector vThree;
    vector vFour;
    vOne.xCord=3;
    vOne.yCord=7;
    vTwo.xCord=8;
    vTwo.yCord=12;
    vThree.xCord=2;
    vThree.yCord=10;
    vFour.xCord=12;
    vFour.yCord=6;

    calSlope(vOne,vTwo);
    calSlope(vThree,vFour);
    return 0;
}
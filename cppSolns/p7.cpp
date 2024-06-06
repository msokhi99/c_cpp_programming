#include<iostream>

void elapsedTime(int dOne, int sOne, int dTwo, int sTwo){
    std::cout<<"Time elapsed for travelling "<<dOne<<" miles with an average speed of "<<sOne<<" miles per hour is: "<<float(dOne)/sOne<<" hours.\n";
    std::cout<<"Time elapsed for travelling "<<dTwo<<" miles with an average speed of "<<sTwo<<" miles per hour is: "<<float(dTwo)/sTwo<<" hours.\n";
}

int main(){
    int distanceOne=150;
    int distanceTwo=204;
    int speedOne=65;
    int speedTwo=68;

    elapsedTime(distanceOne,speedOne,distanceTwo,speedTwo);

    return 0;
}
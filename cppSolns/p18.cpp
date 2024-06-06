#include <iostream>

void distanceTravelled(float, float);

void distanceTravelled(float acc, float time){
    std::cout<<"Distance travelled by the airplane: "<<((float(1.0f/2))*acc)*(time*time)<<" meters per seconds squared.\n";
}

int main(){

    distanceTravelled(3.5f,30.0f);
    return 0;
}
#include <iostream>

void totalDistance(float miles){
    const int oneMile=5280;
    std::cout<<"Distance in feet: "<<oneMile/(float(miles))<<" feet.\n";
}

int main(){
    totalDistance(2.36f);
    return 0;
}
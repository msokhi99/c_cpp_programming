#include<iostream> 
#include<string>

int main(){
    std::cout<<"CHAR: "<<sizeof(char)<<" byte.\n";
    std::cout<<"INTEGER: "<<sizeof(int)<<" bytes.\n";
    std::cout<<"LONG INTEGER: "<<sizeof(long)<<" byte.\n";
    std::cout<<"SHORT INTEGER: "<<sizeof(short)<<" byte.\n";
    std::cout<<"STRING: "<<sizeof(std::string)<<" byte.\n";
    std::cout<<"FLOAT: "<<sizeof(float)<<" byte.\n";
    std::cout<<"DOUBLE "<<sizeof(double)<<" byte.\n";
    std::cout<<"LONG DOUBLE: "<<sizeof(_LONGDOUBLE)<<" byte.\n";
    return 0;
}
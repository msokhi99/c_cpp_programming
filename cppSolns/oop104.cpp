#include<iostream> 

template<class T>
class tempConverter;

template<class T>
class tempConverter{
    private:
    T temp;
    const int fahren=32;
    const float kelvin=273.15f;

    public: 
    tempConverter(T);
    auto celsiusToFahren();
    auto celsiusToKelvin();
};

template<class T>
tempConverter<T>::tempConverter(T userTemp){
    this->temp=userTemp;
}
template<class T>
auto tempConverter<T>::celsiusToFahren(){
    std::cout<<"Converted Temp: "<<(temp * float((9.0f/5)))+fahren<<" F.\n";
}
template<class T>
auto tempConverter<T>::celsiusToKelvin(){
    std::cout<<"Converted Temp: "<<(temp + kelvin)<<" K.\n";
}

int main(){
    tempConverter<float> tempOne(30);
    tempOne.celsiusToFahren();
    tempOne.celsiusToKelvin();
    return 0;
}
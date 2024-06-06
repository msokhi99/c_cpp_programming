#include <iostream>

class pool;

class pool{
    private:
    float length, width, depth;

    public:
    pool(float length=0.0f, float width=0.0f, float depth=0.0f){
        this->length=length;
        this->width=width;
        this->depth=depth;
    }
    void setLength(float length){
        this->length=length;
    }
    float getLength(){
        return this->length;
    }
    void setWidth(float width){
        this->width=width;
    }
    float getWidth(){
        return this->width;
    }
    void setDepth(float depth){
        this->depth=depth;
    }
    float getDepth(){
        return this->depth;
    }
    void volume(){
        std::cout<<"Volume: "<<this->length*this->width*this->depth<<"\n";
    }
};

int main(){
    pool poolOne(25.0f,10.0f,6.0f);
    poolOne.volume();
    return 0;
}
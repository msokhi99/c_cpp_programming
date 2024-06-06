#include<iostream>
#include<string>

class toDoList{
    private:
    std::string A[10];
    int numElements=0;

    public:
    void addTask(std::string addTasks){
        this->A[numElements]=addTasks;
        numElements++;
    }
    void deleteTask(int taskToDelete){
        int adjIndex=taskToDelete-1;
        for(int i=adjIndex; i<numElements-1; i++){
            this->A[i]=A[i+1];
        }
        numElements--;
    }
    void dispArr(){
        for(int i=0; i<numElements; i++){
            std::cout<<A[i]<<"\n";
        }
    }
};

int main(){
    toDoList test;
    test.addTask("Hello");
    test.addTask("Bobby");
    test.dispArr();
    test.deleteTask(2);
    test.addTask("Clean TV");
    test.addTask("Call Simrin");
    test.dispArr();
    test.deleteTask(3);
    test.dispArr();
    return 0;
}
#include<iostream>

/*
This problem can be solved using tail recursion or we can convert it into a simple for loop
and solve it as well. The most easiest would be to just use the formula.
*/

int recursionSum(int num){
    if (num<1){
        return 0;
    }
    else{
        return recursionSum(num-1)+num;
    }
}

int recursionSumTwo(int num){
    if(num<100){
        return 0;
    }
    else{
        return recursionSumTwo(num-1)+num;
    }
}

int usingFormula(int n, int a, int diff){
    int result=(n/2)*(2*a+(n-1)*diff);
    return result;
}

/*
For Loop implementation for the above:

int sum=0;
for(int i=1; i<101; i++){
    sum=sum+i;
}
std::cout<<"The sum is: "<<sum<<"\n";
*/

int main(){
    int caseOne=100;
    int caseTwo=1000;
    std::cout<<recursionSum(caseOne)<<"\n";
    std::cout<<recursionSumTwo(caseTwo)<<"\n";
    std::cout<<"Using formula: "<<usingFormula(100,1,1);
    return 0;
}
#include<iostream>
using namespace std;
int find_factorial(int number){
    if(number==0 || number==1){
        return 1;
    }
    int product=1;
    for (int i = number; i >=1; i--)
    {
        product*=i;
        
    }
    return product;
    
}
int main(){
    int number;
    cout<<"enter the number whose factorial you want to get: ";
    cin>>number;
    int factorial=find_factorial(number);
    cout<<"The factorial of "<<number<<" is: "<<factorial;
   
    return 0;
}
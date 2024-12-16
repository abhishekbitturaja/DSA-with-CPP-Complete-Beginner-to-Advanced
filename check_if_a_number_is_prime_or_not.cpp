#include<iostream>
#include<math.h>
using namespace std;

bool checkprime(int number){
    if(number==0 || number==1){
        return false;
    }
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout<<"enter a number to check if it is prime or not: ";
    cin>>number;
    if(checkprime(number)){
        cout<<number<<" is prime."<<endl;
    }
    else{
        cout<<number<<" is not prime."<<endl;

    }

    return 0;
}
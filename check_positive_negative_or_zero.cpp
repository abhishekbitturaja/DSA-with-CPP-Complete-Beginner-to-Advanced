#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number to check whether it is positive, negative or zero: "<<endl;
    cin>>number;
    if(number>0){
        cout<<number<<" is positive number."<<endl;
    }
    else if(number<0){
        cout<<number<<" is negative number."<<endl;

    }
    else{

        cout<<number<<" is zero."<<endl;
    }
    return 0;
}
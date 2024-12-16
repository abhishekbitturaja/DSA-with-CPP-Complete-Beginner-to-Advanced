#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number to check if it is even or odd: ";
    cin>>number;
    if(number%2==0){
        cout<<number<<" is an even number."<<endl;
    }
    else{
        cout<<number<<" is an odd number."<<endl;

    }
    return 0;
}
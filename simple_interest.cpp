#include<iostream>
using namespace std;

double calculateSI(double principle, double rate, double time){
    return (principle*rate*time)/100;
}
int main(){
    double principle,rate,time;
    cout<<"Enter principle, rate and time: ";
    cin>>principle>>rate>>time;
    double SI=calculateSI(principle,rate,time);
    cout<<"The simple interest is : "<<SI<<endl;
    cout<<"The amount payable is: "<<SI+principle<<endl;
    return 0;

}
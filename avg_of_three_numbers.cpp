#include<iostream>
using namespace std;
double average_of_three_numeber(double num1,double num2, double num3){
    return (num1+num2+num3)/3;
}
int main(){
    double num1,num2,num3;
    cout<<"Enter 3 numbers to find average of those numbers: "<<endl;
    cin>>num1>>num2>>num3;
    double average=average_of_three_numeber(num1,num2,num3);
    cout<<"The average of the three numbers is : "<<average<<endl;
    

    return 0;
}
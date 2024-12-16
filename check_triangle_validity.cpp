#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the sides of a triangle: ";
    cin>>side1>>side2>>side3;
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
    cout << "Sides of a triangle cannot be zero or negative";
    }
    else if(side1<(side2+side3) && side2<(side1+side3) && side3<(side1+side2) ){
        cout<<"The triangle is valid";
    }
    else{
        cout<<"The triangle is invalid";
    }
    return 0;
}
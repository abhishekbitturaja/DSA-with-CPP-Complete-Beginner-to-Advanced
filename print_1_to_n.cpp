#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the upper limit of range: ";
    cin>>number;
    for (int i = 0; i < number; i++)
    {
        cout<<i+1<<" ";
    }
    
    return 0;
}
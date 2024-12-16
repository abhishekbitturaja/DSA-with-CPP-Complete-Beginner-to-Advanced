#include<iostream>
using namespace std;
int main(){
    int upper_limit;
    int lower_limit;
    cout<<"enter the lower limit and upper limit respectively between which we have to print even number: ";
    cin>>lower_limit>>upper_limit;
    for (int  i = lower_limit; i <= upper_limit; i++)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    

    return 0;
}
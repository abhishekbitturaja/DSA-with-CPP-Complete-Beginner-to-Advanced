#include<iostream>
using namespace std;
int main(){
    int lower_limit,upper_limit;
    cout<<"Enter the lower limit and upper limit of the range respectively: ";
    cin>>lower_limit>>upper_limit;
    int sum=0;
    for(int i=lower_limit;i<=upper_limit;i++){
        sum+=i;
    }
    cout<<"The sum is: "<<sum;
    return 0;
}



// 1 
// 2 3
// 3 4 5
// 4 5 6 7 









#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j+i-1<<" ";
            
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
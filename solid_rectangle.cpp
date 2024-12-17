#include<iostream>
using namespace std;
int main(){
    int l,w;
    cout<<"enter length and width of the solid square: ";
    cin>>l>>w;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
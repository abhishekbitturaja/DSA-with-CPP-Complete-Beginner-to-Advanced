#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character to check if it is lowercase or uppercase: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<ch<<" is lowercase."<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<ch<<" is uppercase."<<endl;
    }
    else{
        cout<<ch<<" is not a charater."<<endl;
    }
    return 0;
}
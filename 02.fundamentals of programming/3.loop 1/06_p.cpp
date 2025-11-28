#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"enter how many term you want to print ap -- 4 7 10.... : ";
    cin>>n;
    int a=4;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        a=a+3;
    }
    
    
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many term you want to print of this gp -- 3 12 48 .... : ";
    cin>>n;
    int a=3;
    for (int  i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        a=a*4;
    }
    
}
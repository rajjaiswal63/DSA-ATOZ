#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many term you want to print of this ap -- 4 7 10 13 16.... : ";
    cin>>n;
    int a=4;
    for (int i = 1; i <=n; i++)
    {
        cout<<a<<endl;
        a=a+3;
    }
    
}
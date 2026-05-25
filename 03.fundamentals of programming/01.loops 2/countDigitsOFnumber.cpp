#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any no. to counte its digits : ";
    cin>>n;
    int count=0;
    int a=n;
    while (n>0)
    {
        n=n/10;
        count++;
    }
    if(a==0) cout<<"1";
    else cout<<count;
    
}
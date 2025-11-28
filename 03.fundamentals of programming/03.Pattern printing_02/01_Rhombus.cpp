#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // int nsp =n-1;
    // int nst =1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-1)+1-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= n; k++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    
}
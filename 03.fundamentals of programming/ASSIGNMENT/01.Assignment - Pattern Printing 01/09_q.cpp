#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-1)+1-i; j++)
        {
            cout<<" ";
        }
        for (size_t j = 1; j <= i; j++)
        {
            cout<<(char)(j+64);
        
        }
        cout<<endl;
    }
    
}
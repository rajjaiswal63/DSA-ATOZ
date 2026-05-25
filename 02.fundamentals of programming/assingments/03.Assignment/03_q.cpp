#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number which you want to print its table : ";
    cin>>n;
    for (int i = n; i <= n*10; i+=n)
    {
        cout<<i<<endl;
    }
    
}
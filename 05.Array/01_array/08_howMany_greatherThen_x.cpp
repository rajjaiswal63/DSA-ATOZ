#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter the no. of elements : "; cin>>n;
    int arr[n];
    cout<<"Enter the elemets : ";
    for (int  i = 0; i <= n-1; i++) cin>>arr[i];
    cout<<"Enter the no to check greather : "; cin>>x;
    int count=0;
    for (int i = 0; i <= n-1; i++)
    {
        if(x<arr[i])  count++;
    }
    cout<<count;
}
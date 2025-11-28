#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
     cout<<"Enter the elements : ";
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    int min=arr[0];
    for (int i = 0; i <= n-1; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<min;
    
}
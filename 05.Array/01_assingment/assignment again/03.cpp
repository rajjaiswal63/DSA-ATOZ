#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of array : "; cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<min;
}
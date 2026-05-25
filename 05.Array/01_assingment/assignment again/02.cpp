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
    int max=INT_MIN;
    int smax=INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            smax=max;
            max=arr[i];

        }
        
    }
    
    cout<<max<<" "<<smax;
}
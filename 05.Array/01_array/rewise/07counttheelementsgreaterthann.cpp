#include<iostream>
using namespace std;
int main()
{
    int x,n,count=0;
    cout<<"Enter the x and n : "; 
    cin>>x>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            count+=1;
        }
        
    }
    cout<<count;
} 

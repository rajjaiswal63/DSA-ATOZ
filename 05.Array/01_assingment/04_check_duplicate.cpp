#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
     cout<<"Enter the elements : ";
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    bool flag=false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n-1; i++)
        {
            if (arr[i]==arr[j])
            {
                flag=true;
                break;
            }
            
        }
       break; 
    }
    if (flag==false)
    {
        cout<<"No Duplicate";

    }
    else {
        cout<<"duplicate element found";
    }
    return 0;
}
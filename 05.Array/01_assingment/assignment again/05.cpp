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
    int ducplicate=0;
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]==arr[i])
            {
                flag=true;
                break;
            }
            
        }
        
    }
    if (flag=true)
    {
        cout<<"Yes duplicate is found";
    }
    else cout<<"Not found";
}
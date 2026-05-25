#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of students : "; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        if (arr[i]<35)
        {
            // cout<<arr[i]; --- printing value
            cout<<i;
        }
        
    }
    

}
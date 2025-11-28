#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
    for (int i = 0; i < n-1; i++)   //// loop always n-1 
    {
        for (int j = 0; j < n-1-i; j++) /// also here n-1  --- time complecity is 0(n^2) --- fixing by sub -i
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
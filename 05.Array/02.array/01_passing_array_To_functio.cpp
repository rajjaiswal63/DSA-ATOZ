#include<iostream>
using namespace std;
void input(int arr[],int n){
    for (int i = 0; i < n; i++){
         cin>>arr[i];
        //  return 0;
    }    
}
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        // return 0;
    }
}
void change(int arr[],int n){
    arr[0]=0;
}
int main(){
    int n;
    cout<<"enter no. elements : "; cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    input(arr,n);
    change(arr,n);
    display(arr,n);  
    cout<<"Enter another array : ";
    int ar[n-1];
    input(ar,n-1);
}
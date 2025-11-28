#include<iostream>
using namespace std;
int main(){
    int arr[]={8,9,6,5,4,8,5,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int x=8;
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>x) count++;
    }
    cout<<count;
}
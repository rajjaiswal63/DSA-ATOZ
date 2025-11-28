#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={8,9,6,5,4,8,5,8,1,8,1,2,3,4,5,8,4,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    int l1=INT_MIN, l2=INT_MIN, l3=INT_MIN;
    for (int i = 0; i < size; i++){
        if(arr[i]>=l1){
        l3=l2;
        l2=l1;
        l1=arr[i];
        }
    }
    else if (condition)
    {
        /* code */
    }
    
    cout<<l1<<" "<<l2<<" "<<l3;
    
}
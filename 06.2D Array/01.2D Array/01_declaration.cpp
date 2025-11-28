#include<iostream>
using namespace std;
int main(){
    // type one of declaratoin 
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[2][2];
    cout<<endl;

   // type two of declaratoin 
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<arr[2][2];
     cout<<endl;

    // type three of declaratoin 
    int arr3[3][3];
    arr3[0][0]=1;
    arr3[0][1]=1;
    arr3[0][2]=1;
    arr3[1][0]=1;
    arr3[1][1]=1;
    cout<<arr3[0][2];
     cout<<endl;
    
}
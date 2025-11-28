#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=20;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>x)
    //     {
    //         cout<<arr[i-1]; 
    //         break;
    //     }
    // }

    // time complexity ----- 0(n)

    // now the better code o(log n)
    
    int lo=0;
    int hg=n-1;
    bool flag=false;
    while (lo<=hg)
    {
        int mid=lo+(hg-lo)/2;
        if(arr[mid]==x) {
            flag=true;
            break;
        }
        else if(arr[mid]>x) hg=mid-1;
        else lo=mid+1;
    }
    if (flag==false)
    {
        cout<<arr[hg];
    }
    
}
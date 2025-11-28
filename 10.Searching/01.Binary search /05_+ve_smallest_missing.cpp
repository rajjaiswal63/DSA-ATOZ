#include<iostream>
using namespace std;
int main(){
    // with tc= O(n)
    int arr[]={0,1,2,3,4,8,9,12};
    int n=7;
   for (int  i = 0; i < n; i++)
   {
    if(i!=arr[i]){
        cout<<i;
        break;
    }
   }  
}
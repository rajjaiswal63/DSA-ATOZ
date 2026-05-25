#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,5,6,4,8,3,5,8,1,2,8,3,7,};
    int n=8;
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i]=n)
        {
            cout<<"element is found";
            break;
        }
        
    }
    

}
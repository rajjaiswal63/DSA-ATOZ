#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={6,5,2,3,1,7,4};
    int n=7;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n-1; i++)
    {
        int min=INT_MAX;
        int indexofmin=-1;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<min){
                min=arr[j];
                indexofmin=j;
            }  
        }  
        swap(arr[i],arr[indexofmin]); 
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    
}
// time complexity 
// best case -- o(n^2)
// avg case -- o(n^2)
// worst case -- o(n^2)

// time complexity 
// o(1)

// stablity -- unstable 
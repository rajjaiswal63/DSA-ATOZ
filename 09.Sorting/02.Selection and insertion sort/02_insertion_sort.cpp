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
    for (int i = 1; i < n; i++)
    {
        int j=i;
        while (j>=1 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    
    for(int ele : arr){
        cout<<ele<<" ";
    }
    
}
// time complexity 
// best case -- o(n)
// avg case -- o(n^2)
// worst case -- o(n^2)

// time complexity 
// o(1)

// stablity -- stable
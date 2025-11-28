#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=5;
   for(int ele : arr){
    cout<<ele<<" ";
   }
   cout<<endl;
    int x=0;
    for (int i = 0; i < n; i++)
    {
        int min=INT_MAX;
        int minIndex=-1;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]<=0) continue;
            else {
                if(arr[j] < min){
                    min=arr[j];
                    minIndex=j;
                }
            } 
        }
        arr[minIndex]=-x;
        x++;
    }
   for (int i = 0; i < n; i++)
   {
    arr[i]=-arr[i];
    cout<<arr[i]<<" ";
   }
   
}

//for only positive int
// time complexity -- 0(n^2)
// space complexity -- 0(1)
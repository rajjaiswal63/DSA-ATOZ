#include<iostream>
#include<vector>
using namespace std;
//-----------recursive----------------
void rev1(vector<int>&arr, int currentIndex, int n){
    if(currentIndex==n) return;
    rev1(arr, currentIndex+1, n);
    cout<<arr[currentIndex]<<" ";
}
int main() {
    vector<int>arr={1,2,3,4,5};
    int target=3;
    rev1(arr,0,5);
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
//-----------recursive----------------
void rev1(vector<int>&arr, int currentIndex, int n){
    if(currentIndex==n) return;
    rev1(arr, currentIndex+1, n);
    cout<<arr[currentIndex]<<" ";
}
//-----------itretive--------------
void rev(int arr[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}



int main() {
    // int arr[5] = {1, 2, 3, 4, 5};
    
    // rev2(arr,0, 5);  // Call the function
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }
    vector<int>arr={1,2,3,4,5};
    rev1(arr,0,5);
    return 0;
}

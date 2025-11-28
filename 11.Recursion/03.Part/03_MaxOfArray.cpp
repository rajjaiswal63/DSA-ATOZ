// maze path with print all posible ways
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//----------array traversal---------------------
void trav(int arr[], int size, int idx, int max) {
    if (idx == size) { // Base case: when the index reaches the size of the array
        cout << "Maximum value: " << max << endl;
        return;
    }
    if (arr[idx] > max) {
        max = arr[idx]; // Update max if the current element is greater
    }
    trav(arr, size, idx + 1, max); // Recursive call with updated max
}
int maxinarr(int arr[], int size, int idx){
    if(idx==size) return INT_MIN;
    return max(arr[idx],maxinarr(arr,size,idx+1));
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    trav(arr, size, 0, INT_MIN);
    cout<<endl;
    cout<<maxinarr(arr,size,0);
    return 0;
}
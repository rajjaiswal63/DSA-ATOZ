#include<iostream>
using namespace std;

void skip(int ans[], int &ansIdx, int org[], int size, int idx) {
    if(idx == size) return;  // base case

    int first = org[idx];
    if(first != 1) {
        ans[ansIdx++] = first;  // store in ans[]
    }

    skip(ans, ansIdx, org, size, idx+1);  // recursive call
}

int main() {
    int arr[] = {1,2,4,1,3,1,2,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans[n];      // new array for storing result
    int ansIdx = 0;  // index for ans[]

    skip(ans, ansIdx, arr, n, 0);

    // print the new array
    for(int i = 0; i < ansIdx; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

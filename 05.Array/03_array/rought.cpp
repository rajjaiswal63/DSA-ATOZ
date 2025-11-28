#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void nextPermutation(vector<int>& nums){
//         int n=nums.size();
//         //.find pivot idx
//         int idx=-1;
//         for(int i=n-2; i>=0; i--){
//             if(nums[i]<nums[i+1]){
//                 idx=i;
//                 break;
//             }
//         }
//         if(idx==-1){
//             reverse(nums.begin(),nums.end());
//             return;
//         }
//         //.idx+1 to end --- reverse
//         reverse(nums.begin()+idx+1,nums.end());
//         // finding just greater than idx
//         int g=-1;
//         for(int i=idx+1; i<n; i++){
//             if(nums[i]>nums[idx]){
//                 g=i;
//                 break;
//             }
//         }
//         // swap 
//         int temp=nums[idx];
//         nums[idx]=nums[g];
//         nums[g]=temp;
//         return;
//     }
// int main() {
//     vector<int> v = {2,3,1};
    
//     // Print the original vector
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
    
//     // Call the sorting function to sort the vector
//     nextPermutation(v);

//     // Print the sorted vector
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

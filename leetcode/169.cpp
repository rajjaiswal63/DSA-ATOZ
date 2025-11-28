#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int size=nums.size();
    int majindex=size/2;
    int maj=nums[majindex];
    return maj;
}
int main(){
    vector<int>v={2,2,1,1,1,2,2};
    int major=(majorityElement(v));
    cout<<major<<endl;

}
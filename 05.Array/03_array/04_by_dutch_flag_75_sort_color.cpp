#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&nums){
    cout<<"Array- : ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&nums){
    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while (mid<=high)
    {
        if (nums[mid]==2)
        {
            int temp=nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
        else if (nums[mid]==0)
        {
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            low++;
            mid++;

        }
        else mid++;
    }
}
int main(){
    vector<int>nums={2,1,0,2,1,1,0,2,1,0};
    display(nums);
    sort(nums);
    display(nums);
    
}
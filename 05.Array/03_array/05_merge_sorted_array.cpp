#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1 , vector<int>&v2){
    int i=0;
    int j=0;
    int k=0;
    
    vector<int>v(v1.size()+v2.size());

    while(i<v1.size() && j<v2.size() ){
        if(v1[i]<v2[j]) {
            v[k]=v1[i];
            i++;
            k++;
        }
        else {
            v[k]=v2[j];
            j++;
            k++;
        }
        
    }
    // remaining 
      if (i==v1.size())
      {
        while (j<v2.size())
        {
            v[k]=v2[j];
            k++;
            j++;
        }
        
      }
      else {
         while (i<v1.size())
        {
            v[k]=v1[i];
            k++;
            i++;
        }
        
      }
    return v;
}
void display(vector<int>&nums){
    cout<<"Array- : ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    display(v1);

    vector<int>v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
    display(v2);

    vector<int>v=merge(v1,v2);
    display(v);
}
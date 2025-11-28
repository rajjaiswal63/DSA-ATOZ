// maze path with print all posible ways
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//----------array traversal---------------------
    void trav(int arr[], int size, int idx){
        if(idx==size) return;
        cout<<arr[idx]<<" ";
        trav(arr, size, idx+1);
    }
//---------------vector traversal----------------------
void trav2(vector<int> &v, int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    trav2(v,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    trav(arr, size, 0);
cout<<endl;
    vector<int>v={6,5,4,3,2,1};
    trav2(v,0);
    return 0;
}
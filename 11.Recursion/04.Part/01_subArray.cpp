#include<iostream>
#include<vector>
using namespace std;
// void subByitrative(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             for(int k=i; k<=j; k++){
//                 cout<<arr[k];
//             }
//             cout<<endl;
//         }
//     }
// }
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void subByitrative(int arr[], int n, vector<int>v,int idx){
    if(idx==n){
        display(v);
        return;
    }
    subByitrative(arr, n,v,idx+1);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subByitrative(arr, n,v,idx+1);
    }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subByitrative(arr,n,v,0);
}
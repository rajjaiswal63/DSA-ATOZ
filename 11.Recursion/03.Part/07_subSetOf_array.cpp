#include<iostream>
#include<vector>
using namespace std;
//----------------display------------------------
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void printSubStr(int arr[], int n, int idx, vector<int>v){
    if(idx==n){
        display(v);
        return;
    }
    printSubStr(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    printSubStr(arr,n,idx+1,v);
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    printSubStr(arr,n,0,v);
}
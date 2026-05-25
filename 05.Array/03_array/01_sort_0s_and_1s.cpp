#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int zeros=0;
    int ones=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==0) zeros++;
        else ones++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(i<zeros) v[i]=0;
        else v[i]=1;
    }
    
}
int main(){
    vector<int>v={0,1,0,0,1,1,0,0,1,0,1};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl;
}
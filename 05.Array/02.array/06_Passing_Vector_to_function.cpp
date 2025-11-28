#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;
void input(vector<int>&v){
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
}
void change(vector<int>&v){
    v.at(0)=2;
    v.at(2)=8;
}
void display(vector<int>v){
    for (int i = 0; i < 5; i++)
    {
        cout<<v.at(i);
    }
    
}
int main(){
    vector<int>v;
    input(v);
    change(v);
    display(v);
}
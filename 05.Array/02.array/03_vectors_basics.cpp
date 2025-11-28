#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention size
    v.push_back(6);
    // cout<<v.size()<<endl; no of elements
    cout<<v.capacity()<<endl;
    v.push_back(2);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(5);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(5);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v[0]=33; //used for update


    cout<<v[0]<<endl;   //to print elements
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;



}
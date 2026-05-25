#include <iostream>
#include<vector>
#include <algorithm>  // Include algorithm library for sort
using namespace std;
int main(){
    vector<int>v(5,2);//size of vector or array =5 and each element is 2
    cout<<v[3]<<" ";
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<endl;

    //vector input AND output --
    cout<<"Enter the 5 elements : ";
    vector<int>v2;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
   
    
    //at or array indices -- used to update or print the elements

    vector<int>v3;
    v3.push_back(9);
    v3.push_back(4);
    v3.push_back(7);
    v3.push_back(3);

    v3.at(0)=0;  // updating by using at
    v3.at(1)=8;
    v3.at(2)=4;
    v3.at(3)=7;

    for (int i = 0; i < v3.size(); i++)
    {
        cout<<v3.at(i)<<" ";
    }cout<<endl;
    
//---- sort----
    sort(v3.begin(),v3.end());
    for (int i = 0; i < v3.size(); i++)
    {
        cout<<v3.at(i)<<" ";
    }cout<<endl;




}
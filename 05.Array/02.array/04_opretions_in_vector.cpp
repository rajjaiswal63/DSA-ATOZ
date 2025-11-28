#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention size

    v.push_back(6);
    v.push_back(8);
    v.push_back(1);
    v.push_back(1);
    v.push_back(9);
    v.push_back(4);
    v.push_back(7);
    v.push_back(3);
    v.push_back(15);
    v.push_back(14);
    v.push_back(48);
    v.push_back(96);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    
    cout<<"size = "<<v.size()<<endl; //126 8 1 1 9 4 7
    cout<<"capacity = "<<v.capacity()<<endl; //16

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    
    cout<<"size = "<<v.size()<<endl; //6
    cout<<"capacity = "<<v.capacity()<<endl; //16




   


   


  


}
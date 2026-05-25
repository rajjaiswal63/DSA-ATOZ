#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    cout<<"Enter  the array with elements 5 : ";
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
   vector<int>v2;
   for (int i= v.size()-1; i>=0; i--)
   {
     v2.push_back(v[i]);
   }
   
    
    display(v2);


}
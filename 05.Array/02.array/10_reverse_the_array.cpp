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
void reverse(vector<int>&v){
  int i=0;
  int j=v.size()-1;
  while (i<j)
  {
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }  
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
    reverse(v);
    display(v);
}
    

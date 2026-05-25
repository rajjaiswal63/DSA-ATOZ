#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&v){
    int n;
    cout<<"Enter the no. elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
}

void display(vector<int>&v){
    cout<<"Array- : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&v){
    int i=0;
    int j=v.size() -1;
    while (i<j)
    {
        if (v[i]<0 && v[j]>0)
        {
            int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                i++;
                j--;
        }
        if(v[i]>0) i++;
        if(v[j]<0) j--;
    }
    
}

int main(){
    vector<int>v;
    input(v);
    sort(v);
    display(v);
}
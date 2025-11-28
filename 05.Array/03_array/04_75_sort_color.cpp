#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int zeros=0;
    int ones=0;
    int twos=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==0) zeros++;
        else if (v[i]==1) ones++;
        else twos++;
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(i<zeros) v[i]=0;
        else if (i<ones+zeros) v[i]=1;
        else v[i]=2;
    }
    return;
}

void display(vector<int>&v){
    cout<<"Array- : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v={0,2,1,0,2,1,1,0,2,1,2};
    display(v);
    sort(v);
    display(v);
}
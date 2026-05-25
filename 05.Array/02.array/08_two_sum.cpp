#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cout<<"Enter the target : ";
    cin>>t;

    int s;
    cout<<"Enter the size of Arrat : ";
    cin>>s;

    vector<int>v;
    for (int i = 0; i < s; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for (int i = 0; i <= v.size()-2; i++)
    {
        for (int j = i+1; j <= v.size()-1; j++)
        {
            if (v[i]+v[j]==t)
            {
                cout<<i<<" "<<j;
                cout<<endl;
            }
            
            
        }
        
        
    }
    
}
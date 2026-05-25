#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    for (int i = 1; i <= n+1; i++)
    {
         if (i%2!=0) //odd row
        {
            for (int j = 1; j <=i; j++)
            {
                cout<<j<<" ";
            }
            
        }
        else for (int k = 1; k <=i ; k++)
        {
            cout<<(char)(k+64)<<" ";
        }
        cout<<endl;
    }
    
}
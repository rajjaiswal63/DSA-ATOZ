#include<iostream>
#include<vector>
using namespace std;
 int main(){

//     Ques : Input a string of size n and Update all
// the even positions in the string to character
// ‘a’. Consider 0-based indexing.

    int n;
    cout<<"Enter the size of string : ";
    cin>>n;
    string str[n];
    cout<<"Enter the string : ";
    for (int i = 0; i < n; i++)
    {
            cin>>str[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            str[i]="a";
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
            cout<<str[i];
    }
    cout<<endl;

 }
#include<iostream>
#include<vector>
using namespace std;
 int main(){

//     Ques : Input a string of length n and count all
// the vowels in the given string.

    int n;
    cin>>n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
            cin>>str[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (str[i]=="a" || str[i]=="e" || str[i]=="i" || str[i]=="o" || str[i]=="u")
        {
            count++;
        }
        
    }
    cout<<count;
    cout<<endl;

 }
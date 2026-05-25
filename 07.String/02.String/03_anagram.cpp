#include<iostream>
#include<algorithm>
using namespace std; 
int main(){

//     Given two strings s and t, return true if t is an
// anagram of s, and false otherwise.
// Input : s = physicswallah, t = wallahphysics
// Output: YES
//leedcode 242

    string s="physicswallah";
    string t="wallahphysics";
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t)
    {
        cout<<true;
    }
    else cout<<false;
    cout<<endl;

}
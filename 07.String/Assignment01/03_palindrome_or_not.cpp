// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string rev=s;
    reverse(rev.begin(),rev.end());
    if (rev==s)
    {
        cout<<"yes";
    }
    else cout<<"No";
    
    
    cout<<endl;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

//     Ques : Input a string of even length and
// reverse the first half of the string.

    string s;
    cout<<"Enter the even number of string : ";
    cin>>s;
    if (s.size()%2==0)
    {
        int half=s.size()/2;
        reverse(s.begin(), s.begin() + half);
        cout<<s;
    
        cout<<endl;
    }
    else cout<<"Enter the even number of string";
   
}
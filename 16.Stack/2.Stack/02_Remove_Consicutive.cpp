#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
bool balbracket(string s){
    if(s.length()%2!=0) return false;
    stack<char>st;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(') st.push(s[i]);
        else{ //(s[i]!='(')
            if(st.empty()) return false;
            else st.pop();
        }
    }
    if(st.empty()) return true;
    else return false;
}
// ----------------main function -------------------------
 string removeconsi(string s){
    stack<char>st;
    for (int i = 0; i < s.length(); i++)
    {
       if(st.empty()) st.push(s[i]);
       else{
        if (s[i]!=st.top()) st.push(s[i]);
       } 
    }
    // stack<char>temp;
    // while (st.size()!=0)
    // {
    //     temp.push(st.top());
    //     st.pop();
    // }
    //  stack<char>temp2;
    // while (temp.size()!=0)
    // {
    //     temp2.push(temp.top());
    //     cout<<temp.top()<<" ";
    //     temp.pop();
    // }                    //       inka koi kam hi nahi hai bas ye kar do
    string s2="";
    while (!st.empty())
    {
        s2+=st.top();
        st.pop();
    }
    reverse(s2.begin(), s2.end());
    return s2;

}
int main(){
    string s="(()))";
    cout<<balbracket(s);
    cout<<endl;
    string s2="aaaabbbbcddeffffgg";
    cout<<removeconsi(s2);
}
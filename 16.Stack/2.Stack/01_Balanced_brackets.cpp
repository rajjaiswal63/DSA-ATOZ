#include<iostream>
#include<stack>
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
int main(){
    string s="()(())";
    cout<<balbracket(s);
}
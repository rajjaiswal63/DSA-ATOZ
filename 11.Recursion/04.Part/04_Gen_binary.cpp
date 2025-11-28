#include<iostream>
#include<vector>
using namespace std;
void gen(string s, int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    gen(s+'0',n-1);
    if(s=="" || s[s.length()-1]=='0') gen(s+'1',n-1);
}
int main(){
   int n=3;
   gen("",n);
}
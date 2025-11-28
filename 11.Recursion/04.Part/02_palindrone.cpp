#include<iostream>
#include<vector>
using namespace std;
bool ispan(string s, int i, int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    return ispan(s,i+1,j-1);
}
int main(){
   string s="racecar";
   cout<<ispan(s,0,s.length()-1);
}
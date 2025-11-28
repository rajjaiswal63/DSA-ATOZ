#include<iostream>
using namespace std;
void skipedA(string ans, string org, int idx){
    if(idx==org.length()) {
        cout<<ans<<endl;
        return;
    }
    char first=org[idx];
    if(first=='a') skipedA(ans,org,idx+1);
    if(first!='a') skipedA(ans+first,org,idx+1);
}
int main(){
    string s= "raj jaiswal";
    skipedA("",s,0);
}
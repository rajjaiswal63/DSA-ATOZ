#include<iostream>
#include<vector>
using namespace std;
void storeSubStr(string ans, string org, vector<string>&v, bool flag){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch=org[0];
    if(org.length()==1){
    storeSubStr(ans+ch,org.substr(1),v,true);
    storeSubStr(ans,org.substr(1),v, true);
    return;
    }
    char dh=org[1];
    if(ch==dh){
    if(flag==true)storeSubStr(ans+ch,org.substr(1),v,true);
    storeSubStr(ans,org.substr(1),v, false);
    }
    else{
    if(flag==true)storeSubStr(ans+ch,org.substr(1),v,true);
    storeSubStr(ans,org.substr(1),v, true);
    }
}
//----------------display------------------------
void display(vector<string>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    string str2="aaab";
    vector<string>ans;
    storeSubStr(" ",str2,ans,true);
    display(ans);
    
}
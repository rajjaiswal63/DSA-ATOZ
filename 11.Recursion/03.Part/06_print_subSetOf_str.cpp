#include<iostream>
#include<vector>
using namespace std;
// -----------------printing sub strings ---------------------
void printSubStr(string ans, string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    char ch=org[0];
    printSubStr(ans,org.substr(1));
    printSubStr(ans+ch,org.substr(1));
}
//----------------storing sub string---------------------------
void storeSubStr(string ans, string org, vector<string>&v){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch=org[0];
    storeSubStr(ans,org.substr(1),v);
    storeSubStr(ans+ch,org.substr(1),v);
}
//----------------display------------------------
void display(vector<string>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}
int main(){
 // -----------------printing sub strings ---------------------
    string str="raj";
    printSubStr("",str);
//----------------storing sub string---------------------------
    string str2="raj";
    vector<string>ans;
    storeSubStr(" ",str2,ans);
    display(ans);
    
}
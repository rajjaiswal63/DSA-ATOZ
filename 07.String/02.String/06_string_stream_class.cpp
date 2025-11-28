#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std; 
int main(){

   //Ques : Given a sentence, split every single
//word of the sentence and print in a new line.

 string s;
 //cin>>s;
 getline(cin,s);
  stringstream ss(s);
  string temp;
  
  while (ss>>temp)
  {
    cout<<temp<<endl;
  }
  

}
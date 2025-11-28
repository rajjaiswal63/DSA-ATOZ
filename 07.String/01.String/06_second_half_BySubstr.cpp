#include<iostream>
using namespace std;
int main(){

//     Ques : Input a string of even length and return the
// second half of that string using inbuilt substr
// function
   string s;
   cout<<"Enter the string of even lenght : ";
   cin>>s;
   if (s.size()%2==0)
   {
    cout<<s.substr(s.size()/2);
   }
   else cout<<"Enter the string of even lenght : ";

   cout<<endl;
}
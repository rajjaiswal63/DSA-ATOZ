#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    // Ques : Input a string of length greater than 5 and
    // reverse the substring from position 2 to 5 using
    // inbuilt functions.

    string s;
    cout<<"Enter the srting of lenght greater then 5 : ";
    cin>>s;
    if (s.size()>5)
    {
        reverse(s.begin()+1, s.begin()+5);
        cout<<s;
    }
    else cout<<"invalid";
    
    
    

    cout<<endl;
}
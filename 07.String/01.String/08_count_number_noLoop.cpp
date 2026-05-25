#include<iostream>
using namespace std;
int main(){

    // Ques : Return the total number of digits in a
    // number without using any loop.
    // Hint : Try using inbuilt to_string() function.

    int n=152364;
    string s=to_string(n);
    cout<<s.length();

   cout<<endl;
}
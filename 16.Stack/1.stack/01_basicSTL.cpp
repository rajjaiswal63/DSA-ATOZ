#include<iostream>
#include<stack>
using namespace std;
int main(){
 stack<int>st;
 stack<int>temp;
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 st.push(60);
//  cout<<st.size()<<endl;

 while (st.size()>0)

 {
    cout<<st.top()<<" ";
    temp.push(st.top());
    st.pop();
 }
//  cout<<endl<<st.size()<<endl;
 while (temp.size()>0)
 {
    st.push(temp.top());
    temp.pop();
 }
//  cout<<endl<<st.size()<<endl;
//  cout<<endl<<temp.size()<<endl;
 
 
}
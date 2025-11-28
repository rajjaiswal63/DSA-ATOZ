#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>st){
    stack<int>temp;
    while (st.size()>0)
 {
    cout<<st.top()<<" ";
    temp.push(st.top());
    st.pop();
 }
 while (temp.size()>0)
 {
    
    st.push(temp.top());
    temp.pop();
 }
    
}
int main(){
    stack<int>st;
    stack<int>copy;
    stack<int>st2;
    stack<int>temp;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     st.push(50);
     st.push(60);
     //60 50 40 30 20 10
     
     copy=st;
    while (copy.size()>0)
    {
        temp.push(copy.top());
        copy.pop();
    }
    while (temp.size()>0)
    {
        st2.push(temp.top());
        temp.pop();
    }
    
    display(st);
    cout<<endl;
    display(st2);
}
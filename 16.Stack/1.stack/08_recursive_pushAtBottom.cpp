#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}
void pushatbottom(int val, stack<int>&st){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatbottom(val, st);
    st.push(x);
}

int main(){
    stack<int>st;
      st.push(10); 
      st.push(20);
      st.push(30);
      st.push(40);
      st.push(50);
      st.push(60);
      display(st);
      pushatbottom(80,st);
      cout<<endl;
      display(st);
}

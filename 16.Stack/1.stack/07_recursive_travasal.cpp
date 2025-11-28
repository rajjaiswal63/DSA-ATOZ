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
void displayRev(stack<int>&st){
    if(st.size()==0) return;
    // cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    st.push(x);
    
}
// void displayRev(stack<int>& st) {
//     if (st.empty()) return;
//     int x = st.top();
//     st.pop();
//     // Recursively print rest
//     displayRev(st);
//     // Print after recursion (bottom element prints first)
//     cout << x << " ";
//     // Restore the original stack
//     st.push(x);
// }
int main(){
    stack<int>st;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     st.push(50);
     st.push(60);
     display(st);
     cout<<endl;
     displayRev(st);
}
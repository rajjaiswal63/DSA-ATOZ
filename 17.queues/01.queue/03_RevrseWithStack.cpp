#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    for (int i = 0; i < q.size(); i++)
   {
    cout<<q.front()<<" ";
    q.push(q.front());
    q.pop();
   }
   cout<<endl;
}
void RevWithStack(queue<int>&q){
    stack<int>s;
   while (q.size()!=0)
   {
    s.push(q.front());
    q.pop();
   }
    while (s.size()!=0)
    {
    //    cout<<s.top()<<" ";
       q.push(s.top());
       s.pop();
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    RevWithStack(q);
    display(q);
}
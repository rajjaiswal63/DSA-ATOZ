#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
   for (int i = 0; i < q.size(); i++)
   {
     int x= q.front();
    cout<<x<<" ";
    q.push(x);
    q.pop();
   }
   cout<<endl;
}
int main(){
    queue<int>q;
    // push 
    // pop
    // front -> top
    // size, empty
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
   for (int i = 0; i < q.size(); i++)
   {
    cout<<q.front()<<" ";
    q.push(q.front());
    q.pop();
   }
   cout<<endl;
   q.pop();
   display(q);
}
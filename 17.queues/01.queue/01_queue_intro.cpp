#include<iostream>
#include<queue>
using namespace std;
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
    cout<<"front = "<<q.front()<<endl;
    cout<<"back = "<<q.back()<<endl;
    cout<<"size = "<<q.size()<<endl;

    cout<<endl;
    q.pop();
    cout<<"front = "<<q.front()<<endl;
    cout<<"back = "<<q.back()<<endl;
    cout<<"size = "<<q.size();


}
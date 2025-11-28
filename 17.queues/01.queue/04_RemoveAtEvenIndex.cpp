#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int siz =q.size();
    for (int i = 0; i < siz; i++)
   {
    cout<<q.front()<<" ";
    q.push(q.front());
    q.pop();
   }
   cout<<endl;
}
void removeAtEvenIndex(queue<int>&q){
   int siz =q.size();
   for (int  i = 0; i < siz; i++)
   {
    if (i%2==0)q.pop();
    else{
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
 }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    removeAtEvenIndex(q);
    display(q);
}
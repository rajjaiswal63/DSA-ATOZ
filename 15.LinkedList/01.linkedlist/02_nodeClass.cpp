#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
int main(){
    Node a,b;
    a.val=10;
    a.next=&b;
    b.val=20;
    b.next=NULL;

    cout<<(*(a.next)).val;
    cout<<endl; //or
    cout<<a.next->val;


    a.next->val=5000;
    cout<<a.next->val;

    
}
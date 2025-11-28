#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next=&b;
    b.next=&c;
    c.next=&d;

    //accesing d from a
   cout<< a.next->next->next->val;
   cout<<endl;
//traversal using loop ---- not good
    Node temp=a;
    while(temp.next!=NULL){
        cout<<temp.val<<" ";
        temp=*(temp.next);
    }
cout<<endl;
////traversal using loop ----  good
Node temp2=a;
    while(1){
        cout<<temp2.val<<" ";
        if(temp2.next==NULL) break;
        temp2=*(temp2.next);
    }

}
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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAthead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void indexatidx(int val, int idx){
        if(idx<0 || idx>size) cout<<"invalid input"<<endl;
        else if(idx==0) insertAthead(val);
        else if(idx==size)insertAtEnd(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for (int i = 0; i < idx-1; i++)
            {
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
        }
    }
    int getelement(int idx){
        if(idx<0 || idx>=size) cout<<"invalid idx"<<endl;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else
        {
            Node*temp=head;
            for (int i = 0; i < idx; i++)
            {
                temp=temp->next;
            }
            return temp->val;  
        } 
        return -1;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"invalid";
            return;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteattail(){
         if(size==0){
            cout<<"invalid";
            return;
        }
        else{
            Node* temp=head;
            while (temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    
    void display(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAthead(01);
    ll.insertAthead(02);
    ll.display();
    ll.indexatidx(70,3);
    ll.display();
    cout<<ll.getelement(2)<<endl;
    ll.deleteattail();
    ll.display();



}


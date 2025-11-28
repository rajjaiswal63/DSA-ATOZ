#include<iostream>
#include<vector>
using namespace std;
class queue{
public:
    int f;
    int b;
    vector<int>arr;
    queue(int val){
        f=0;
        b=0;
        vector<int>v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"queue is empty";
            return;
        }
        f++;
    }
    int front(){
         if(f-b==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[f];
    }
     int back(){
        if(f-b==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[b-1];
    }  
    int size(){
        return (b-f);
    } 
    bool empty(){
        if(f-b==0){
            return true;;
        }
        else return false;
    }
    void display(){
        if (b-f==0) return;
        for (int i = f; i < b; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();
    q.pop();
    q.display();
}
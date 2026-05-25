#include<iostream>
using namespace std;
int main(){
    //  int x=5,y=5;
    //  int*p1=&x;
    //  int*p2=&y;
    //  cout<<*p1+*p2;

    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"Enter the first no and second no. : ";
    cin>>*p1>>*p2;
    cout<<*p1+*p2;
     
}
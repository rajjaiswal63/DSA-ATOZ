#include<iostream>
using namespace std;
void fun(){
    return;
    cout<<"hello";
}
void gun(){
    cout<<"raj"<<endl;
    fun();
    return;
}
int main(){
    gun();
}
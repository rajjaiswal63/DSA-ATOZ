#include<iostream>
using namespace std;
class cal{
    public:
    int a;
    int b;
    void add(){ cout<<a+b<<endl; }
    void sub(){ cout<<a-b<<endl; }
    void mul(){ cout<<a*b<<endl; }
    void div(){ cout<<a/b<<endl; }
};
int main(){
    cal calsi;
    calsi.a=2;
    calsi.b=2;
    calsi.add();
    calsi.sub();
    calsi.mul();
    calsi.div();

}
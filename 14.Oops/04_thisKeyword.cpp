#include<iostream>
using namespace std;
class cri{
    public:
    string name;
    int runs;
    cri(){

    }
    cri(string name, int runs){
       this->name=name;
       this->runs=runs;
    }
};
int main(){
    cri c1("virat", 25000);
    cri c2("rohit", 18000);
    cri c3;
    c3.name="raj";
    c3.runs=2564;

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
    cout<<c3.name<<" "<<c3.runs<<endl;

}
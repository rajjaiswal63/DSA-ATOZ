#include<iostream>
using namespace std;
class cri{
    public:
    string name;
    int runs;
    float avg;
    cri(){

    }
    cri(string name, int runs, float avg){
       this->name=name;
       this->runs=runs;
       this->avg=avg;
    }
    void change(cri* c){
        c->avg=7.2;
    }

  
};
int main(){
    cri c1("virat", 25000,5.2);
    cri c2("rohit", 18000,4.2);
    c1.change(&c1);
    cout<<c1.avg;


}
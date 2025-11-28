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
    void display(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
    int matches(){
        return this->runs/this->avg;
    }
};
int main(){
    cri c1("virat", 25000,5.2);
    cri c2("rohit", 18000,4.2);

    c1.display();
    c2.display();
    cout<<c1.matches();
}
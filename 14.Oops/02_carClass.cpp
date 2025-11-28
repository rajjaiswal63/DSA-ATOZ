#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seater;
    string type;
};
void printca(car c){
    cout<<"Car Name: "<<c.name<<endl;
    cout<<"Car Price: "<<c.price<<endl;
    cout<<"Car Seater: "<<c.seater<<endl;
    cout<<"Car Type: "<<c.type<<endl;
    cout<<"------------------------"<<endl;
    
    
}
void change(car& c){
    c.name="hgdfpjg";
}
int main(){
    car c1;
    c1.name="BMW";
    c1.price=1000000;
    c1.seater=5;
    c1.type="Luxury";

    car c2;
    c2.name="Mercedes";
    c2.price=   1200000;
    c2.seater= 6;
    c2.type="Luxury";

    printca(c1);
    change(c1);
    printca(c1);
    cout<<endl;
    cout<<endl;
    printca(c2);
    return 0;
}
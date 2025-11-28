#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

    student(string n, int r, float g){
        name=n;
        rno=r;
        gpa=g;
    }
};
void display(student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
void change(student& s){
    s.name="raj jaiswal";
}
int main(){
    student s1("jonh", 124, 5.2);
    // s1.rno=12;
    // s1.name="John";
    // s1.gpa=5.3;

     student s2("jonhgh", 1254, 5.21);;
    // s2.rno=13;
    // s2.name="raj";
    // s2.gpa=7.2;

     student s3("jonh", 124, 5.21);;
    // s3.rno=122;
    // s3.name="John wick";
    // s3.gpa=5.333;

    display(s1);
    display(s2);
    display(s3);
    change(s1);
    display(s1);

    return 0;

}
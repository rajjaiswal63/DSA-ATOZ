#include<iostream>
using namespace std;
class Students{
    public:
    string name;
    int rollno;
    float marks;
    Students(string name, int rollno, float marks){
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
    }
    void getStudents(){
        cout<<name<<" "<<rollno<<" "<<marks<<endl;
    }
};
void ChangeName(Students* s){
    s->name="Aniket";
}
int main(){
    Students s1("Raj",124, 56.2); // static memmory allocaton in queue in ram.
    s1.getStudents();
    Students* s2=new Students("Pankaj", 101, 60.2); // dynamic memmory allocation in heap.
     cout<<s2->name<<" "<<s2->rollno<<" "<<s2->marks<<endl;

    //changed name
    ChangeName(&s1);
    s1.getStudents();
}
#include<iostream>
using namespace std;
class player{
private:
    int score;
    int health;
public:
    // setter
    void setscore(int score){
        this->score=score;
    }
    void sethealth(int health){
        this->health=health;
    }
    // getter
    void getscore(){
        cout<<this->score<<endl;
    }
    void gethealth(){
        cout<<this->health<<endl;
    }
    // constuctor
    // display fuction 
    void display(){

    }

};
int main(){
    player p1;
    p1.setscore(50);
    p1.sethealth(9);

    player p2;
    p2.setscore(40);
    p2.sethealth(8);

    player p3;
    p3.setscore(30);
    p3.sethealth(7);

    p1.getscore();
    p1.gethealth();
}
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
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};
 int totalscore(player a, player b, player c){
        return a.getscore()+b.getscore()+c.getscore();
    }
player maxscore(player a, player b, player c){
    if(a.getscore()>b.getscore() && a.getscore()>c.getscore()) return a;
    if(b.getscore()>a.getscore() && b.getscore()>c.getscore()) return b;
    else return c;
}
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

    player *p4=new player;
    p4->setscore(0);
    p4->sethealth(0);


    cout<<p1.getscore()<<" "<<p1.gethealth()<<endl;
    cout<<p2.getscore()<<" "<<p2.gethealth()<<endl;
    cout<<p3.getscore()<<" "<<p3.gethealth()<<endl;
    cout<<p4->getscore()<<" "<<p4->gethealth()<<endl;

    cout<<"total score ="<<totalscore(p1,p2,p3)<<endl;
    player maxscoreplayer=maxscore(p1,p2,p3);
    cout<<maxscoreplayer.getscore();
    
}
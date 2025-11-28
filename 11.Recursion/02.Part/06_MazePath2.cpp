// maze path with print all posible ways
#include<iostream>
#include<string>
using namespace std;
int maze(int sr, int sc, int er, int ec) {
    if(sr>er || sc>ec) return 0;  // base case
    if(sr==er && sc==ec) return 1;  //base case

    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways= rightways+downways;
    return totalways;
}
//------------main function---------------
void printways(int sr, int sc, int er, int ec, string s) {
    if(sr>er || sc>ec) return ;  // base case
    if(sr==er && sc==ec){
        cout<<s<<endl;
    }  //base case

    printways(sr,sc+1,er,ec,s+'R'); 
    printways(sr+1,sc,er,ec,s+'D');  
    return;
}

int main(){
    cout<<maze(1,1,3,3);
    cout<<endl;
    printways(1,1,3,3,"");
    return 0;
}
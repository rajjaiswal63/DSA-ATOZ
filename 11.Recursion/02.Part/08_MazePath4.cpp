// maze path with print all posible ways by passing only two argumemt----
#include<iostream>
using namespace std;
// int maze(int sr, int sc, int er, int ec) {
//     if(sr>er || sc>ec) return 0;  // base case
//     if(sr==er && sc==ec) return 1;  //base case

//     int rightways=maze(sr,sc+1,er,ec);
//     int downways=maze(sr+1,sc,er,ec);
//     int totalways= rightways+downways;
//     return totalways;
// }

void printways(int sr, int sc, string s) {
    if(sr<1 || sc<1) return ;  // base case
    if(sr==1 && sc==1){
        cout<<s<<endl;
    }  //base case

    printways(sr,sc-1,s+'R'); 
    printways(sr-1,sc,s+'D');  
    return;
}

int main(){
    printways(3,3,"");
    return 0;
}
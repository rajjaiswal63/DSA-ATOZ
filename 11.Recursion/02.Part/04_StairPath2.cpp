#include<iostream>
using namespace std;
int fun(int n) {
   if(n==1) return 1; //base case
   if(n==2) return 2; // base case
   if(n==3) return 4; // base case pata nahi kyu 4 hai
   return fun(n-1)+fun(n-2)+fun(n-3);
}

int main(){
    cout<<fun(4);
    return 0;
}
#include<iostream>
using namespace std;
int fun(int n) {
   if(n==1) return 1; //base case
   if(n==2) return 2; // base case
   return fun(n-1)+fun(n-2);
}

int main(){
    cout<<fun(4);
    return 0;
}
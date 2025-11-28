#include<iostream>
using namespace std;
int fun(int n){
    // base case
    if(n==0 || n==1) return 1;
    // recursive call
    return n*fun(n-1);
   
}
int main(){
    cout<<fun(5); 
}


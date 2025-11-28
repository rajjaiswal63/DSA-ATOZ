#include<iostream>
using namespace std;
void inc(int i, int n){
    if(i>n) return;
     cout<<i<<" ";
     inc(i+1,n);
     if(i>1)cout<<i-1<<" ";
}
int main(){
    inc(1,5);
}
#include<iostream>
using namespace std;
bool ispowerof2(int a){
    if(a==1) return true;
    if(a%2!=0) return false;
    return ispowerof2(a/2);
}
int main(){
   cout<<ispowerof2(15);
}
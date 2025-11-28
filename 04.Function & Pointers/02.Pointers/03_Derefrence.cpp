#include<iostream>
using namespace std;
int main(){
       int x=5;
       int *p=&x;
       cout<<*p<<endl; // p ke andar jo address rakha hai uspe jao or vah ki value print karo ... print --- 5.

       *p=55;
       cout<<x;
        
}
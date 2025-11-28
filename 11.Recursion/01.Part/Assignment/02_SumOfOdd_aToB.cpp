#include<iostream>
using namespace std;
int sumOfOddO(int a, int b){
    if(a>b) return 0;
    if(a%2==0) return sumOfOddO(a+1,b);
    if(b%2==0) return sumOfOddO(a,b-1);
    if(b==a) return a;
    return b+sumOfOddO(a,b-2);
}
int main(){
   cout<<sumOfOddO(2,5);
}
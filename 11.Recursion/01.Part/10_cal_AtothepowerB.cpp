#include<iostream>
using namespace std;
int fun(int a, int b){
    if (b==0)
    {
        return 1;
    }
    
    return a*fun(a,b-1);
}
int main(){
    cout<<fun(2,3);
}
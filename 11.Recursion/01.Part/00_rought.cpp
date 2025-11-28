#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"gm"<<" ";
    fun(n-1);
}
int factorial(int n){
     if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
void nto1(int n){
    if(n==0) return;
    cout<<n<<" ";
    nto1(n-1);
}
void f1ton(int n, int n2){
    if(n>n2) return;
    cout<<n<<" ";
    f1ton(n+1,n2);
}
void f1tonWithoutPrameter(int n){
    if(n==0) return;
    f1tonWithoutPrameter(n-1);
    cout<<n<<" ";
}
int sum1ton(int i, int n){
    if(n==0) return 0;
    return i+sum1ton(i+1,n-1);
}
int sum1ton2(int n){
    if(n==0) return 0;
    return n+sum1ton2(n-1);
}
int atob(int a, int b){
    if(b==0) return 1;
    return a*atob(a,b-1);
}
int main(){
    // int n;
    // cin>>n;
    // fun(n);
    // cout<<endl;
    // cout<<factorial(0);
    nto1(5);
    cout<<endl;
    f1ton(1,5);
    cout<<endl;
    f1tonWithoutPrameter(5);
    cout<<endl;
    cout<<sum1ton(1,5);
    cout<<endl;
    cout<<sum1ton2(20);
    cout<<endl;
    cout<<atob(2,3);

}
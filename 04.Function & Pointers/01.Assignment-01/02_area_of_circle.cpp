#include<iostream>
using namespace std;
int area(int x){
    int a=3.14*x*x;
    return a;
}
int main(){
    int n;
    cout<<"Enter the radius of circle : ";
    cin>>n;
    int a=area(n);
    cout<<a;

}
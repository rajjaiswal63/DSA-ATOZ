#include<iostream>
using namespace std;
int squar(int x){
    int y=x*x;
    return y;
}
void sqr(int x){
    for (int i = 1; i <= x; i++)
    {
        cout<<i<<" "<<squar(i)<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    sqr(n);
    
}
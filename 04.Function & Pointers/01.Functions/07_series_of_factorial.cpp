#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int factorial=fact(i);
        cout<<factorial;
        cout<<endl;
    }
    

}
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
int combination(int n, int r){
    int com=fact(n)/(fact(r)*fact(n-r));
    return com;
}
int permutation(int n, int r){
    int per=fact(n)/fact(n-r);
    return per;
}

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int r;
    cout<<"enter the value of r : ";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int combinationn=combination(n,r);
    int permutasation=permutation(n,r);
    cout<<combinationn<<endl<<permutasation;

}
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i = 2; i <= x ; i++)
    {
        f *=i;
        
    }
    return f;

}
int combi(int n, int r){
    int ncr =fact(n)/(fact(r)*(fact(n-r)));
    return ncr;
}
int permu(int n, int r){
    int per=fact(n)/fact(n-r);
    return per;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // int nfact=1;
    // for (int i = 2; i <= n; i++)
    // {
    //         nfact *=i;
    // }
    int nfact=fact(n);

    int r;
    cout<<"Enter the value of r : ";
    cin>>r;
    // int rfact=1;
    // for (int i = 2; i <= r; i++)
    // {
    //     rfact *= i;
    // }
    int rfact=fact(r);

    // int rfact=1;
    // for (int i = 2; i <= (n-r); i++)
    // {
    //     nrfact *= i;
    // }
    
    int nrfact=fact(n-r);

    // int ncr =nfact/(rfact*(nrfact));
    // cout<<ncr;
    int ncre=combi(n,r);
    cout<<ncre;
    int perrrr=permu(n,r);
    cout<<endl;
    cout<<perrrr;
}

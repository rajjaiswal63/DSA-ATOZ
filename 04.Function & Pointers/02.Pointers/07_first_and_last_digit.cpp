#include<iostream>
using namespace std;
void function(int n, int *prt1, int *prt2){
    *prt2=n%10;
    while (n>9)
    {
       n/=10;
    }
    *prt1=n;
    return;
}
int main(){
    int n;
    cout<<"Enter any no. : ";
    cin>>n;
    int firstdigit, lastdigit;
    int *prt1=&firstdigit;
    int *prt2=&lastdigit;
    function(n, &firstdigit, &lastdigit);
    cout<<firstdigit<<endl<<lastdigit;

}
    

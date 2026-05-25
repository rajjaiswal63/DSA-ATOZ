#include<iostream>
using namespace std;
void odd(int x, int y){
    for (int i = x; i <= y; i++)
    { 
        if (i%2!=0)
        {
             cout<<i<<endl;
        } 
    } 
}
int main(){
    int a,b;
    cout<<"Enter the two no. to find the all no. between them : ";
    cin>>a>>b;
    odd(a,b);

}
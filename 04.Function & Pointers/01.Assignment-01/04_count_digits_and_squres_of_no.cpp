#include<iostream>
using namespace std;
int numofdigits(int x){
    int count=0;
    while (x>0)
    {
       x= x/10;
       count+=1;
    }
    return count;
}
int squar(int x){
    int y=x*x;
    return y;
}
void squareofnunber(int x){
     cout<<"square = "<<" "<<squar(x)<<endl;
}
int main(){
    int n;
    cout<<"Enter the any positive no. : ";
    cin>>n;
    int digit= numofdigits(n);
    cout<<"digits = "<<digit<<" ";
    squareofnunber(n);
    


}
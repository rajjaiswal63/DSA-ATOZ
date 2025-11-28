#include<iostream>
using namespace std;
void big_pattern(int x){
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main(){
    big_pattern(3);
    big_pattern(4);
    big_pattern(5);
    big_pattern(6);
}
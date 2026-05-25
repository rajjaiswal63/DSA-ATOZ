// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
// Input 1: A = 23 , B = 34 , C = 71
// Output : ‘A’ has the least marks.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the marks of a , b ,c : ";
    cin>>a>>b>>c;
   if (a<=b && a<=c) cout<<"a is least";
   else if (b<=a && b<=c) cout<<"b is least";
   else cout<<"c is least";
 
   
}
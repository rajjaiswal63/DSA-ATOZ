// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.
// Input 1: length = 5 breadth = 7
// Output 1: Area is greater than perimeter.

#include<iostream>
using namespace std;
int main(){
    int l,w;
    cout<<"Enter the length and breadth of a rectangle";
    cin>>l>>w;
    int area=l*w;
    int perimeter=(l+w)*2;
    if (area>perimeter) cout<<area<<" "<<"area is larger";
    else cout<<perimeter<<" "<<"perimeter is larger";
}
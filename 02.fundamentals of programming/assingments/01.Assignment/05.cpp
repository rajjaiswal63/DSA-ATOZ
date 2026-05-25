// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
// Input : side1 = 5 side2 = 4 side3 = 4
// Output: This is an Isosceles triangle.

#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the side of the triangle : "<<endl;
    cin>>a>>b>>c;
    if (a==b && b==c) cout<<"triangle is equilateral";
    else if (a!=b && b!=c) cout<<"triangle is scalene";
    else if (a==b || b==c) cout<<"triangle is isosceles";
}
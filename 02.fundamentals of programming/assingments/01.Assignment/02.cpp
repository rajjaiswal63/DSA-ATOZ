// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.
#include<iostream>
using namespace std;
int main(){
    float r, pi=3.14;
    cout<<"Enter the radius of the circle";
    cin>>r;
    float area=pi*r*r;
    float circumference=2*pi*r;
    if(area>circumference) cout<<area<<"area of circle is larger then circumference";
    else cout<<circumference<<"circumference of circle is larger then area  "; 
    return 0;
}
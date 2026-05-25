// WAP for finding the volume of the cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,h;
    cout<<"Enter the radius of the cylinder"<<endl;
    cin>>r;
    cout<<"Enter the height of the cylinder"<<endl;
    cin>>h;
    float v=pi*r*r*h;
    cout<<v;
}
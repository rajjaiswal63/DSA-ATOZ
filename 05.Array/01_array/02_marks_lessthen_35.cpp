#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of students: ";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks of students : ";
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    cout<<"list of roll no who have < 35 : ";
    for (int i = 0; i < n; i++)
    {
        if (marks[i]<35)
        {
            cout<<i<<" ";
        }
        
    }
    
}
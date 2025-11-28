#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of array : "; cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=0;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if (x!=arr[i])
        {
            cout<<x<<"missing elemets";
            flag=true;
            break;
        }
        else {
            x++;
        }
    }
    if (flag=false)
    {
        cout<<"These are no smallest positive missing element.";
    }
    
}
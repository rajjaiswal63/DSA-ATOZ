#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any no to check composite or not : ";
    cin>>n;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            cout<<n<<" " <<"yes it is composite no.";
            break;
        }
       else
       {
        cout<<n<<" "<<"its not a composite no.";
        break;
       }
       
        
    }
    
}
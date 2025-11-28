#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    if (str.size()==1)
    {
        cout<<"0"<<endl;
        return 0;

    }
    for (int i = 0; i < str.size(); i++)
    {
       
         if (i==0 && str[i]!=str[i+1])
        {
            count++;
        }
        else if (i==str.size()-1 && str[i]!=str[i-1])
        {
            count++;
        }
        
        
        else if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
    }
    cout<<count;

    cout<<endl;
}
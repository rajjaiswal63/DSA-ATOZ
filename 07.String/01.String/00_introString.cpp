#include<iostream>
using namespace std;
int main(){
    
// char str[6]={'a','s','d','f','g','h'};
// for (int i = 0; i < 6; i++)
// {
//     cout<<str[i]<<" ";
// }

// char str[5]="asdf";//end with special character /0

//three ways of printing string ---
//1st way 
char str11[5]={'a','b','c','d'};
cout<<str11<<endl;

//2nd way
char str2[]={'a','b','c','d'};
for (int i = 0; str2[i]!='\0'; i++)
{
    cout<<str2[i]<<" ";
}





    cout<<endl;
    return 0;
}
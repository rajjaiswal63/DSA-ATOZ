#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 
int main(){

    // Given a string n consisting of lowercase
    // English alphabets. Print the character that is
    // occurring most number of times.

    // this is the most efficient way ....

  string s;
  cin>>s;
  int n=s.size();
  vector<int>arr(26,0);

  for (int i = 0; i < n; i++)
  {
     char ch=s[i];
     int  ascii=(int)ch;
     arr[ascii-97]++;
  }
  int max=0;
  for (int i = 0; i < 26; i++)
  {
    if (arr[i]>max)
    {
        max=arr[i];
    }
    
  }
  for (int i = 0; i < 26; i++)
  {
    if (arr[i]==max)
    {
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<max<<endl;
    }
    
  }
  

  
  

}
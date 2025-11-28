#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std; 
int main(){

    // Ques : Given a sentence ‘str’, return the word
    // that is occurring most number of times in that
    // sentence.

     string s;
     //cin>>s;
     getline(cin,s);
     stringstream ss(s);
     string temp;
     vector<string>v;
     while (ss>>temp)
     {
       v.push_back(temp);
     }
     
     sort(v.begin(),v.end());

     int maxcount=1;
     int count=1;
     for (int i = 1; i < v.size(); i++)
     {
        if (v[i]==v[i-1])
        {
            count++;
        }
        else count=1;
        maxcount=max(count,maxcount);
        
     }
     count=1;

      for (int i = 1; i < v.size(); i++)
     {
        if (v[i]==v[i-1])
        {
            count++;
        }
        else count=1;
        if (count==maxcount)
        {
            cout<<v[i]<<" "<<maxcount<<endl;

        }
        
        return 0;
}
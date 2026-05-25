// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int count=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
        
            count++;
        }
        
    }
    cout<<count;

 
    cout<<endl;
    return 0;
}


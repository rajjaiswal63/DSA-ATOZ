#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& v){
    int i=0;
    int j=v.size() -1;
    while (i<j){
    
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
    }  
}

int main() {
    vector<int> v = {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1};
    
    // Print the original vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // Call the sorting function to sort the vector
    sort(v);

    // Print the sorted vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
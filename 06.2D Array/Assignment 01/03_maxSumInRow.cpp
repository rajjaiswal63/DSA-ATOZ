#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns of the matrix: ";
    cout<<endl;
    int m,n;
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the elements of the matrix: ";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"this is the largest sum of row : ";
    for(int i=0; i<m; i++){
        
    }
}
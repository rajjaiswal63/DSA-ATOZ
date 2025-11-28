#include<iostream>
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
    cout<<"The both diagonal print of the matrix is: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1) cout<<a[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
    }
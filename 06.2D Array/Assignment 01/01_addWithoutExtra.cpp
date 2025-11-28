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
    cout<<"Enter the number of rows and columns of the matrix: ";
    cout<<endl;
    int p,q;
    cin>>p>>q;
    int a2[p][q];
    cout<<"Enter the elements of the matrix: ";
    cout<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>a2[i][j];
        }
    }
    cout<<"The addition print of the matrix is: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            a2[i][j]+=a[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
}
}
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
    cout<<"The Matrix is rotated by 90 anticlockwise: "<<endl;
     for(int i=0; i<n; i++){
        for(int j=i+1; j<m; j++){
           swap(a[i][j],a[j][i]);
        }
     }
     for(int k=0; k<n; k++){
        int i=0;
        int j=m-1;
        while(i<=j){
            swap(a[i][k],a[j][k]);
            i++;
            j--;
        }
     }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
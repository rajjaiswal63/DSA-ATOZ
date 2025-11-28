#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns of the matrix: ";
    int m,n;
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The wave print of the matrix is: "<<endl;
    for (int j = 0; j < n; j++) {
        if(j % 2 == 0){
            for (int i = 0; i < m; i++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int i = m - 1; i >= 0; i--) {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
    
}
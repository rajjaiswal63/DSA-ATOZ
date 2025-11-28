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
    cout<<"The spiral print of the matrix is: "<<endl;
     int minr=0;
        int minc=0;
        int maxr=m-1;
        int maxc=n-1;
        int t=m*n;
        int count=0;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc; j<=maxc && count<t; j++){
                cout<<a[minr][j]<<" ";
                count++;
            }
            minr++;
            for(int i=minr; i<=maxr && count<t; i++){
                cout<<a[i][maxc]<<" ";
                 count++;
            }
            maxc--;
            for(int j=maxc; j>=minc && count<t; j--){
                cout<<a[maxr][j]<<" ";
                 count++;
            }
            maxr--;
            for(int i=maxr; i>=minr && count<t; i--){
                cout<<a[i][minc]<<" ";
                 count++;
            }
            minc++;
        }
        
        
    }
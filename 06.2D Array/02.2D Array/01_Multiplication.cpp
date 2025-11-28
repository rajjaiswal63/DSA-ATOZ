#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns of first matrix: ";
    int m,n;
    cin>>m>>n;
    cout<<"Enter thr number of rows and columns of second matrix: ";
    int p,q;
    cin>>p>>q;
    if(n!=p){
        cout<<"Matrix multiplication not possible";
        return 0;
    }
    else{
        int a[m][n],b[p][q],mul[m][q];
        cout<<"Enter the elements of first matrix: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter the elements of second matrix: ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                mul[i][j]=0;
                for(int k=0;k<n;k++){
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"Resultant matrix after multiplication is: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<mul[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
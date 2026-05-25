#include<iostream>
using namespace std;
int main(){
    // traversal
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

   for (int  i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
   }
//    taking input
    int m,n;
    cin>>m>>n;
    int arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    //giving output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    
}

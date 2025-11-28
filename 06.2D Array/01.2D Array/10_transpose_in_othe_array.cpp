#include<iostream>
using namespace std;
int main(){
    int arr[2][4]={{1, 2, 3, 4}, {5, 6, 7, 8}};

    //display
     for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // transposed arr--
    int arr1[4][2];
     for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }
     for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}
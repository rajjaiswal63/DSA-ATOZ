#include<iostream>
#include<climits>
using namespace std;
int main(){
  cout<<"Enter the first 3*3 elements : ";
  int arr[3][3];
  for (int  i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];

    }
    
  }
  cout<<"Enter the second 3*3 elements : ";
  int arr2[3][3];
  for (int  i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        cin>>arr2[i][j];

    }
    
  }
  
  for (int  i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        cout<<arr[i][j]+arr2[i][j]<<" ";

    }
    cout<<endl;

  }
    
}

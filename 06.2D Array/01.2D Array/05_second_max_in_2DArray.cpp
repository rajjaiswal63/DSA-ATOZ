#include<iostream>
#include<climits>
using namespace std;
int main(){
  cout<<"Enter the 3*3 elements : ";
  int arr[3][3];
  for (int  i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];

    }
    
  }


    int max=INT_MIN;
    int smax=INT_MIN;
    for (int  i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        if (max<arr[i][j])
        {
            smax=max;
            max=arr[i][j];
        }
        

    }

   
  }

    cout<<smax;
}

#include<iostream>
#include<climits>
using namespace std;
int main(){
//  cout<<"Enter the roll no. then marks "<<endl;
  int arr[4][2]={1,10,2,20,3,30,4,40};
  // for (int  i = 0; i < 4; i++)
  // {
  //   for (int j = 0; j < 2; j++)
  //   {
  //       cin>>arr[i][j];

  //   }
    
  // }


    int max=INT_MIN;
    for (int  i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
        if (max<arr[i][j])
        {
            max=arr[i][j];
        }
    }
  }
    cout<<max;
    cout<<endl;
}

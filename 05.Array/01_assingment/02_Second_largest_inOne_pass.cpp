#include <iostream>
#include <climits>
using namespace std;
void input(int arr[],int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
// void display(int arr[],int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
// }
void sort(int arr[],int size){
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        
    }
    cout<<max<<" "<<smax;
}
int main() {
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    sort(arr,n);
   
}

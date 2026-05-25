#include <iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int size=sizeof(arr)/arr[0];
    int *ptr=arr;//giving address
    for (int i = 0; i < size; i++)
    {
        cout<<*ptr;
        ptr++;
    }
    
}
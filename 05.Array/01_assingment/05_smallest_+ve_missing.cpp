#include <iostream>
#include <climits>
using namespace std;
void input(int arr[],int size){
    cout<<"Enter only +ve number in sorted manner : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
void smallest_missing_elements(int arr[],int size){
    int m_element=1;
    
    for (int i = 0; i < size; i++)
    {
      
        if (arr[i]==m_element)
        {
            m_element++;
            
        } 
    }
     cout<<"Missing element -- "<<m_element ;
}
int main() {
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    smallest_missing_elements(arr,n);
}
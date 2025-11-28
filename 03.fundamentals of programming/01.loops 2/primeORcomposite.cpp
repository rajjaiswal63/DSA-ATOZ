// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    int count_p=0;
//    int count_n=0;
// for (cin>>n; n!=0;) {
//     if (n>0)
//     {
//         count_p++;
//     }
//     else if (n<0)
//     {
//         count_n++;
//     }
    
    
// }
// cout<<count_p<<endl<<count_n;
    
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    int count_p = 0;
    int count_n = 0;

    // Start the loop to repeatedly get input until the user enters 0
    for (cin >> n; n != 0; cin >> n) {
        if (n > 0) {
            count_p++;
        } else if (n < 0) {
            count_n++;
        }
    }

    // Output the count of positive and negative numbers
    cout << "Positive count: " << count_p << endl;
    cout << "Negative count: " << count_n << endl;

    return 0;
    }


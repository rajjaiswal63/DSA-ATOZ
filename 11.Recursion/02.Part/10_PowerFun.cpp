#include<iostream>
using namespace std;
int fabo(int a, int b) {
    if (b == 1) return a;
    if(b%2==0) {
    int ans = fabo(a,b/2);
    return ans*ans;
    }
    else{
    int ans = fabo(a,b/2);
    return ans*ans*a;
    }

}

int main(){
    cout<<fabo(2,3);
    return 0;
}
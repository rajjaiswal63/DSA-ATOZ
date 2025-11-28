#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>& q) {
    int siz = q.size();
    for (int i = 0; i < siz; i++) {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout << endl;
}

void removeAtEvenIndex(queue<int>& q) {
    int siz = q.size();
    for (int pos = 0; pos < siz; pos++) {
        if (pos % 2 == 0) {
            // Remove element at even position
            q.pop();
        } else {
            // Keep element at odd position
            q.push(q.front());
            q.pop();
        }
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);            // 10 20 30 40 50 60
    removeAtEvenIndex(q);  // removes 10, 30, 50
    display(q);            // 20 40 60
}

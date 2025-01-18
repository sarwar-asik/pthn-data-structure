#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next; // Pointer to the next node
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyQueue {
public:
      list <int>L;

    void push(int val) {
      L.push_back(val);
    }

    void pop() {
        L.pop_front();
    }

    int front() {
     return   L.front();
    }

    int back() {
      return L.back();
    }

    int size() {
        return L.size();
    }

    bool empty() {
        return L.empty();
    }
};

int main() {
    MyQueue q1;
    int n;

    cout << "Enter the number of elements to enqueue: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q1.push(val);
    }

    cout << "Dequeuing elements from the queue:" << endl;
    while (!q1.empty()) {
        cout << q1.front() << endl;
        q1.pop();
    }

    return 0;
}

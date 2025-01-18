#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next; // Pointer to the next node
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue {
public:
    Node* head;
    Node* tail;
    int sz;

    MyQueue() { // Constructor to initialize the queue
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        sz++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Queue is empty, cannot pop!" << endl;
            return;
        }
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;
        if (head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        if (head == NULL) {
            cout << "Queue is empty, no front element!" << endl;
            return -1; // Return a sentinel value
        }
        return head->val;
    }

    int back() {
        if (tail == NULL) {
            cout << "Queue is empty, no back element!" << endl;
            return -1; // Return a sentinel value
        }
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head == NULL;
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

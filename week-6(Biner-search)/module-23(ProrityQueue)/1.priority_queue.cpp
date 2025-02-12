#include<bits/stdc++.h>
using namespace std;

int main() {

    // Maximum Priority Queue
    priority_queue<int> pq;

    pq.push(10);
    pq.push(15);
    pq.push(20);
    pq.push(25);
    pq.push(30);

    cout << pq.top() << endl;

    while(!pq.empty()) {
        cout << pq.top() << " "; // 30 25 20 15 10
        pq.pop();
    }


    // minimum Priority Queue
    priority_queue<int,vector<int>,greater<int>> min_pq;

    min_pq.push(10);
    min_pq.push(15);
    min_pq.push(20);
    min_pq.push(25);
    min_pq.push(30);

    while (!min_pq.empty())
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
  
    }
    

    return 0;
}
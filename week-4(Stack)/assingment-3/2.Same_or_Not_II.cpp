#include<bits/stdc++.h>
using namespace std;


// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/same-or-not-4


class myStack{
   public:
     list<int> L;

     void push(int val){
        L.push_back(val); // ! O(1)
     }

     void pop(){
        L.pop_back(); // ! O(1)
     }

     int top(){
        return  L.back(); /// last element of list //!O(1)
     }
     int size(){
        return L.size(); // ! O(1)
     }
     
     bool empty(){
      return L.empty(); // ! O(1)
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

    long long int N, M;
    cin >> N >> M;

    myStack A;
    for(long long  i=0; i<N; i++){
        long long  int x;
        cin >> x;
        A.push(x);
    }

    MyQueue B;
    for( long long int i=0; i<M; i++){
         long long int x;
        cin >> x;
        B.push(x);
    }

    if(A.empty() && B.empty()){
        cout << "YES" << endl;
        return 0;
    };

    if(N != M){
        cout << "NO" << endl;
        return 0;
    }
 
    while(!A.empty() && !B.empty()){
        // cout << A.top() << " b= " << B.front() << endl;
        // if(A.size() != B.size()) return 0;
        if(A.top() != B.front()){
            cout << "NO" << endl;
            return 0;
        }
        A.pop();
        B.pop();
    }
    cout << "YES" << endl;
    return 0;
}
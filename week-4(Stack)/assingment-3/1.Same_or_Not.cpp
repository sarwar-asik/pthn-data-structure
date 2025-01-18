#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/same-or-not-ii

int main() {

    long long int N, M;
    cin >> N >> M;

    stack<long long >A;
    for(long long  i=0; i<N; i++){
        long long  int x;
        cin >> x;
        A.push(x);
    }

    queue< long long int>B;
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
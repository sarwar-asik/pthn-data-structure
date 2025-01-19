#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/special-queries-1-1
int main() {
    // main code here

    long long Q;
    cin >> Q;
    queue<string>Q1;
    while(Q--){
        long long S;
        cin >> S ;
        // cin >> N;
        //   string N;
        // cin >> N;
        // cout<< "S="<<S<<" N="<<N<<endl;
        
        if(S==0){
              string N;
           cin >> N;
            Q1.push(N);
        }
        else{
            // cout << "Query: " << N << endl;
            if(Q1.empty()){
                cout << "Invalid" << endl;
            }else{
                cout << Q1.front() << endl;
                Q1.pop();
            }
        }
    }
    return 0;
}
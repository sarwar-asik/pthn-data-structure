#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/sort-it-6-3
int main() {
 

     int N;
     cin >> N;
     int A[N];
     
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    sort(A,A+N);
  
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }

cout<<endl;
    for (int i=N-1;i>=0;i--){
        cout<<A[i]<<" ";
    }



    return 0;
}
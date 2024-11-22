#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/sort-it-2-1-1
int *sort_it(int N){
   int *A = new int[N];
  for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    return A;
}
int main() {
    // Your code here
       int N;
     cin >> N;
  
  int *A= sort_it(N);
  
    for(int i=N-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
     
  

    
    return 0;
}
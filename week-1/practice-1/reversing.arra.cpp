#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
int main(){
 
    long long N;
    cin >> N;

    long long arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
   
    for(int i=N-1; i>=0;i--){
        // cout<<" "<<"i="<<i;
        cout<<arr[i]<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
int main() {
    // main code here
    string S;
    cin >> S; 

    string temp = S;
    // cout << temp << endl;  
  
     reverse(S.begin(),S.end());

    // cout << S << endl;
    // cout << temp << endl;
    if(S == temp){                      
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
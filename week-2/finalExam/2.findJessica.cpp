#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/find-jessica
int main() {
    // main code here

    string S;
    getline(cin,S);
    stringstream S2(S);
    string word;
    bool isFound = false;
    while (S2 >> word)
    {
        if(word=="Jessica"){
            // cout << "YES" << endl;
            isFound = true;                                  
            break;
        }
    }

    if(!isFound){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    
    
    return 0;
}
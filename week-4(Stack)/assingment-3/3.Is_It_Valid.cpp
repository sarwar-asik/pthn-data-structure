#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/is-it-valid-1-1/problem
int main() {
    // main code here

    long long T ;
    cin >> T;
    while(T--){
     string S;
     cin >> S;

     stack <char> testStack;
    //  loop from right to left
     for( int i=S.size()-1; i>=0; i--){
        char cha = S[i];
        // testStack.push(cha);

       
         if(!testStack.empty() &&( (cha =='1' && testStack.top()=='0') || (cha=='0' && testStack.top()=='1'))){
            // cout << "1char is= "<<cha <<" and top is= "<<testStack.top()<<endl;
            // (cha =='1' && testStack.top()=='0') || (cha=='0' && testStack.top()=='1')

            testStack.pop();
        }
        else{
            testStack.push(cha);
        }
//  cout << "char is= "<<cha <<" and top is= "<<testStack.top()<<endl;
     }

     if(testStack.empty()){
        cout << "YES" << endl;
     }
     else{
        cout << "NO" << endl;
     }

    }
    return 0;
}
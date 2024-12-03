
#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/replace-word

int main() {
    // main code here
  
    int T;
    cin >> T;
    for(int m = 0; m < T; m++){
        string S,X;
        cin >> S >> X;
        // cout << S << endl;
        // cout << X << endl;
       int position =S.find(X);
    //   cout <<"Pos of "<< X << " is " << pos << endl;
    //   string newStr = S.replace(pos,X.size(),"#");
    //   cout << newStr << endl;

        // S.replace(pos,X.size(),"#");
        // cout << S.replace(pos,X.size(),"#")<< endl;
        // replace every and each X  in S with #

        while(position != string::npos){
            S.replace(position,X.size(),"#");
            position = S.find(X,position+1);
        }
        cout << S << endl;

        
    }
    return 0;
}
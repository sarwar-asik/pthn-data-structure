#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    string s ="Helllo String";
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout <<endl<< *s.begin() << endl;
    cout << *(s.end()-1) << endl;  /// here s.end() is a pointer to last element of string
    // these are iterators
    for(string:: iterator it =s.begin();it < s.end();it++){
        cout << *it <<endl;
    } 

    // for(auto it =s.begin();it <s.end();it++){
    //     cout << *it <<endl;
    // } 
    return 0;
}
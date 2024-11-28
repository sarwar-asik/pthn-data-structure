#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    stringstream sstream(s);
    string word;

     sstream >> word;
    reverse(word.begin(),word.end());
    cout <<word;
    while(sstream >> word){
        reverse(word.begin(),word.end());
        cout<<" " << word;
        
    }

    return 0;
}
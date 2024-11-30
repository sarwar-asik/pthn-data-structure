#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    cout << s << endl;

    stringstream ssString(s); // built-in class of cpp

        string word;
    //! stringstream -1
        // ssString >> word;
        // cout << word << endl;
        // ssString >> word;
        // cout << word << endl;

  //! stringstream -2
  // int totalWOrd=0;  // for count words
    while(ssString >>word){
      cout << word << endl;
    //   totalWOrd++;  // for count words
    }
      
    return 0;
}
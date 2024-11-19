#include<bits/stdc++.h>

using namespace std;

int main(){
    cout << "Type a string\n";
  char str[100];

//   cin>> str; // without space
cin.ignore();  /// use it when use .getline() for multiple input lines
cin.getline(str,100); /// input with space 

  cout << str << endl;

    return 0;
}   
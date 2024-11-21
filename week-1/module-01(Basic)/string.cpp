#include<iostream>
using namespace std;

int main(){
    cout << "Type a string\n";
  char str[100];

//   cin>> str; // without space
cin.ignore();  /// use it when use .getline() for multiple input lines
cin.getline(str,100); /// input with space 

  cout << str << endl;

//    direct input

   string str2 ;  
   cout << "Type a string\n";
   cin >> str2;
   cout << str2 << endl;
    return 0;
}
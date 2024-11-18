#include<iostream>
using namespace std;

int main(){
    
    /// ! int
    cout << "Type a Int input = ";

    int x;
    cin >>x;
    cout <<"Output =" << x<< endl;
//! input char
 char c;
 cout << "Type a char input = ";
   cin >> c;
   cout << "Output = " << c << endl;


   // !input string
   string s;
   cout << "Type a string input = ";
   cin >> s;
   cout << "Output = " << s << endl;

//! print with ASCII value
  //   int ascii =  c;
  //   cout << "Ascii value ="<< ascii << endl;
  cout << "Ascii value ="<< (int)c << endl;  // system-2
  cout << "Int value of "<< (char)c<< endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    //! way-1
    // string s = "hello world";

   //! way-2
    // string s("hello world!");  
    string s("hello world!",4);  

       //! way-3
       string t(s,3);
       cout << t << endl;

          //! way-4
        //   string s(5,'A');  //! string of 5 size which replace A everywhere

    cout << s << endl;
    return 0;
}
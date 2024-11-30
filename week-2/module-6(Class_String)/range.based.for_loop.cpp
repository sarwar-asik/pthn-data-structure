#include<bits/stdc++.h>
using namespace std;

int main() {

    string text;
    cin >> text;   
    // ! way-1
    for (int i=0;i<text.size();i++){
      cout << text[i] << endl;
    }
    
    //! way-2 ( not recommend for index)
    for(char c:text){  /// you can do it with array
      cout << c << endl;
    }

    cout << text << endl;
    return 0;
}
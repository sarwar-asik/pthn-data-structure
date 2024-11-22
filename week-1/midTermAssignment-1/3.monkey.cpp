#include<bits/stdc++.h>
using namespace std;


 

int main() {

 string s;
 // char s[100];
//  cin.getline(s,100);
//  cout << s << endl;
 while (getline(cin, s)) {
//  sort(s.begin(), s.end());
//  cout << s << endl;(
// cin.getline(s,100))
int len = s.length();
for(int i=0; i<len; i++){
    if(s[i]!=' '){
        // cout<< i;
        cout<< s[i];
    }
}
cout<< endl; // broken the line 
 

 }

 return 0;

}


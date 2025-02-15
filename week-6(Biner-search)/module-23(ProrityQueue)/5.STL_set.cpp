#include<bits/stdc++.h>
using namespace std;


// !input == 7
// 30 5 10  5 2 11 11

// ! output == 2 5 10 11 30
int main() {
    set<int>s;

    int n;
    cin >> n;
    while (n--)
    {
       int val;
       cin >> val;
       s.insert(val);
    }

    for (auto iter = s.begin();iter != s.end();iter++){
        cout << *iter<<" ";
    }
    



    return 0;
}
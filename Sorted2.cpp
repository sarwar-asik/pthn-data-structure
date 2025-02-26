#include<bits/stdc++.h>
using namespace std;

int main() {
   int T;
   cin >> T;
   while(T--){
    int N;
    cin >> N;
    set <int>s;
    while(N--){
        int A;
        cin >> A;
        s.insert(A);
    }
    for(auto iter= s.begin();iter !=s.end();iter++){
        cout << *iter<<" ";
    }
    cout << endl;
   }

    return 0;
}
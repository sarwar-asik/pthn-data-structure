#include<bits/stdc++.h>
using namespace std;

int main() {
  
    vector <int>v;
    cout << v.capacity() << endl;
    // cout << v.max_size() << endl;
    v.push_back(10); //! increase by double
    cout << v.capacity() << endl;

    v.push_back(20);
    v.push_back(30);
    v.resize(3);

    
     
    return 0;
}
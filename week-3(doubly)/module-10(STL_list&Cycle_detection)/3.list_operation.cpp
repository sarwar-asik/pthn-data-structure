#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 4, 6, 2, 5,3,7,8,9,6};

    l.sort();  // ascending
    l.sort(greater<int>()); // descending

    l.unique(); /// must be on sortend


    
    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}
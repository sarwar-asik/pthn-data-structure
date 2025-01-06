#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
     list<int>L ;
     int N;
     while(true){
        cin >>N;
        if(N==-1) break;
        L.push_back(N); 
     }

// first should short 1, 2 2,2 3, 4 , 4 ,5
     L.sort();
     ///ascending
     L.unique();

    for(int val:L){
        cout<<val<<" ";
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {


    vector<int> v={1,2,3,4,5};
    vector<int> v2;

    v2=v;
    // way-1
    for(int i= 0; i < v2.size();i++){
        cout<<v2[i]<<" ";
    }

   cout<<endl;
   v2.pop_back();

    // way-2
    for(int x:v2){
        cout << x<<" ";
    }
    return 0;
}
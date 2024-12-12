#include<bits/stdc++.h>
using namespace std;

int main() {
    
      //! type-1
    // vector<int> v;

    //! type-2
    // vector<int> v(10);


    //! type-3
    vector<int> v(10,-1);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    //! one vector in vector
    vector<int>v2(v); 

    // ! vector with array
    int  arr[5]={10,10,10,10,10};
    vector<int>v3(arr,arr+5);
      for(int i=0; i<v3.size(); i++) {
        cout << v3[i] << " ";
    }
  

    // cout << v.size() << endl;
   return 0;
}
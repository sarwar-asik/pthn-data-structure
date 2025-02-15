#include<bits/stdc++.h>
using namespace std;

int main() {
 
   map<string,int>mp; /// we can declare any key and value

// ! map_name[key]= value
  //   int fre[100];  array
   mp["role"] =10; //! log n
   mp["si"]= 20;

   cout<< mp["role"]<<endl;

  for(auto iter = mp.begin(); iter != mp.end(); iter++){  //! Nlog(n)
    // cout << (*iter).first<<" "<< (*iter).second<<endl; //! bcz iter means iterator. so , de reference
    cout << iter->first<<" "<<iter->second<<endl;
  }
  
  

    return 0;
}
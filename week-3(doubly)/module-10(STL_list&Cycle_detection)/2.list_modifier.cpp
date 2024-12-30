#include<bits/stdc++.h>
using namespace std;

int main() {

  list<int> l={10,20,30,40,50};
  list<int> l2;
  
  l2.assign(l.begin(),l.end()); // ! assign l to l2
  l2.assign(5,99); // ! assign 5 100 in l2

 l2.push_back(100); // ! add 100 at last
 l2.push_front(200); // ! add 200 at first


  cout << *next(l2.begin(),2) << endl; // !access on 2nd index

  l2.insert(next(l2.begin(),2),300); // ! insert 300 at 2nd index
  l2.erase(next(l2.begin(),3)); // ! erase 3rd index

  for(int val:l2){
      cout<<val<<" ";
  }

    return 0;
}
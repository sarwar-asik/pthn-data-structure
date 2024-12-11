#include<bits/stdc++.h>
using namespace std;

int main() {
 
// ! way-1
//  int n;
//  cin>>n;
//  vector<int>v(n);

//  for(int i=0; i<n; i++){
//     cin>>v[i];
//  }

 // ! way-2 without n
  int n;
 cin>>n;
 vector<int>v();

 for(int i=0; i<n; i++){
   //  cin>>v[i];
   int x;
   cin>>x;
   v.push_back(x);
 }

 for(int x:v){
   cout<<"x: "<<x<<endl;
 }
    return 0;
}
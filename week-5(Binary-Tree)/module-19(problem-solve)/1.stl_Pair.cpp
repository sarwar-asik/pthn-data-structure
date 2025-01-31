#include<bits/stdc++.h>
using namespace std;

int main() {

//way-1 
   pair<int,int>p; // ! combine any 2  data type value

   p = make_pair(2,3);
   cout<<"FIrst=> "<<p.first<<" 2nd => "<<p.second<<endl;

//    way-2
        pair<string,int>p1;
        p1 = {"Hi",3};

        cout<<"FIrst=> "<<p1.first<<" 2nd => "<<p1.second<<endl;


// way-3  with vector
//input
// 3
// 2 5
// 4 2
// 4 8

//output   
// 2 5
// 4 2
// 4 8

            int n ;
            cin >> n;

          vector<pair<int,int>>v(n);
          for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
          }

          for(int i=0; i<n; i++){
            cout << v[i].first << " " << v[i].second << endl;
          }



    return 0;
}
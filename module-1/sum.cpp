#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    

    // formula-1
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
 }
  cout << sum << endl;

// formula-2
  int sum2 = (n * (n + 1)) / 2;
   cout << sum2 << endl;



    return 0;
}
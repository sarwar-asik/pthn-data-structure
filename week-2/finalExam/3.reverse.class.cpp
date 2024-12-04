#include<bits/stdc++.h>
using namespace std;

class Student {
 public:
  string nm;
  int cls;
  char sec;
  int id;
};
int main() {
    // main code here
  int n;
  cin >> n;
  Student arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i].nm >> arr[i].cls >> arr[i].sec >> arr[i].id;
  }
  // for (int i = 0; i < n; i++) {
  //   // cout << arr[i].id << " " << arr[i].nm << " " << arr[i].cls << " " << arr[i].sec << endl;
  //   cout << arr[n - 1 - i].id << " " << arr[n - 1 - i].nm << " " << arr[n - 1 - i].cls << " " << arr[n - 1 - i].sec << endl;
  // }


  for (int i = 0; i < n / 2; i++) {
    swap(arr[i].sec, arr[n - 1 - i].sec);
  }
  for (int i = 0; i < n; i++) {
    cout  << arr[i].nm << " " << arr[i].cls << " " << arr[i].sec << " "  << arr[i].id << endl;
  }
    
    return 0;
}
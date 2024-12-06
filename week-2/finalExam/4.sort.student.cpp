#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/sort-it-6-2
class Student {
 public:
  string nm;
  int cls;
  char sec;
  int id;
  int math_marks;
  int eng_marks;
  int total_marks(){
    return math_marks + eng_marks;
  }
};

bool CompareCallback(Student a,Student b){
   if(a.total_marks() == b.total_marks()){
      return a.id < b.id;
   }
   else {
    return a.total_marks() > b.total_marks();
   }
//    return a.total_marks() > b.total_marks();
};
int main() {
    // main code here
  int n;
  cin >> n;
  Student arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i].nm >> arr[i].cls >> arr[i].sec >> arr[i].id>> arr[i].math_marks >> arr[i].eng_marks;
  }




  sort(arr,arr+n,CompareCallback);
  for (int i = 0; i < n; i++) {
    cout  << arr[i].nm << " " << arr[i].cls << " " << arr[i].sec << " "  << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks  << endl;
  }
    
    return 0;
}
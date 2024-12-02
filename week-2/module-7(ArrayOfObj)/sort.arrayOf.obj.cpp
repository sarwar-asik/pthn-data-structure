#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;

};

bool compFunc(Student a,Student b){
   if(a.marks == b.marks){
        return a.roll < b.roll;
    }
    else {
    return a.marks > b.marks;
    }
};
int main() {

    int n;
    cin >> n;
    // int arr[n];
    
    Student arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;

    } 

//    sort(arr,arr+n); not correct



sort(arr,arr+n,compFunc);
    for (int i = 0; i < n; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

  
    return 0;
}
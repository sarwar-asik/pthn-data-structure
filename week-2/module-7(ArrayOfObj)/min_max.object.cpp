#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;

};
int main() {

    int n;
    cin >> n;
    // int arr[n];
    
    Student arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;

    } 

    // for (int i = 0; i < n; i++){
    //     cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    // }
    // int mn = INT_MAX;
    Student mn;
     mn.marks = INT_MAX;

    for (int i = 0; i < n; i++){
        // mn = min(arr[i].marks,mn);
        if(arr[i].marks < mn.marks){
            mn = arr[i];    
        }
    }
    // cout   << "Minimum marks = "  << mn << endl;
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    return 0;
}
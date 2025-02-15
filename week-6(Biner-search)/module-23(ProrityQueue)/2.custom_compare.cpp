
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll, marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

};

//  create a cmp name class for custom compare 
/// must name operator syntax
/// must use ()() in operator function

/// it is like custom compare function of  C++
class cmp{
    public:
    bool operator()(Student a, Student b){
    if(a.marks<b.marks)return true;  // it is for descending sort
    else return false;
    }
};

int main() {

    // priority_queue<int>pq; //! maximum priority
    priority_queue<Student,vector<Student>,cmp>pq; //! minimum priority
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student sObject(name, roll, marks);
        pq.push(sObject);
    }

    while(!pq.empty()){
        cout << pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }


    return 0;
} 
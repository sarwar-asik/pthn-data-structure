#include<bits/stdc++.h>
using namespace std;


// 1 sakib A 50
class Student{
    public :
    long long id;
    char name[100];
    char section;
    long long marks;
    Student(long long id, const char* name, char section, long long marks) {
        this->id = id;
        strcpy(this->name, name);  
        this->section = section;
        this->marks = marks;
    }

};
int main() {
    // Your code here

//    Student s1(1, "Tamim", 'A', 50);
//   cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<""<<s1.marks<<endl;

long long T;
cin >> T;

 for(long long i=0; i<T; i++){
    // cout<<"test-"<<i+1<< endl;
    Student maxStudent(0, "", 'A', 0);
     for (long long j=1; j<=3; j++){
        // take input for every student fields
        int id;
        char name[100];
        char section;
        long long marks;
        cin >> id >> name >> section >> marks;
        Student s1(id, name, section, marks);
        // cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;

        if(s1.marks > maxStudent.marks){
            // cout<<s1.name<<"in -1"<<endl;
            maxStudent = s1;
            // maxStudent.id= s1.id;
        }
        else if (s1.marks == maxStudent.marks ){
        //    cout<<s1.name<<"in -2"<<endl;
            if(s1.id<maxStudent.id){
                //  cout<<s1.name<<"in -3"<<endl;
                maxStudent = s1;
                //  maxStudent.id= s1.id;
            }
        }
        else {
          maxStudent = s1;
        }
     }
     cout << maxStudent.id << " " << maxStudent.name << " " << maxStudent.section << " " << maxStudent.marks << endl;
    //   print the max marks student who is most than other 2.

 }
    return 0;
}
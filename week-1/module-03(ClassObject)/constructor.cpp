#include<bits/stdc++.h>
using namespace std;

   class Student {
        public:
        int cls;
        int roll; /// taken 4 bytes
        double gpa; /// taken 8 bytes
        Student(int cls,int roll,double gpa){
            this->roll=roll;
            this->cls=cls;
            this->gpa=gpa;
        }
    };
int main(){ 


    Student karim(5,20,2.44);
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;



    class Student {
        public:
        char name[100]; /// taken 100 bytes memory
        int roll; /// taken 4 bytes
        double gpa; /// taken 8 bytes
    };
int main (){

    Student s1,s2;
    s1.roll = 101;
    s1.gpa = 3.50;
    // char temp[100] = "Tamim";
    // strcpy(s1.name,temp); // !store the temp string in s1.name
    // cout << s1.name << " " << s1.roll << " " << s1.gpa << endl;
    cin >> s1.name >> s1.roll >> s1.gpa;
    cin >> s2.name >> s2.roll >> s2.gpa;
    // cin.getline(s1.name,100);
    cout <<"Name is: " << s1.name << endl;  
    cout << s1.name << s1.roll << s1.gpa<< endl;
    cout << s2.name << s2.roll << s2.gpa;

  
    return 0;
}

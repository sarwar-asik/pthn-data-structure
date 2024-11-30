#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout << "Hello " << name << endl;
    }
};
int main() {
    // main code here

    Student asik("asik", 1);
    cout << asik.name << " " << asik.roll << endl;
    asik.hello();
    
    return 0;
}
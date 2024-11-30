#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    string s = "Hi String Data";
    string s2 = "Fanka";
    cout<<s<<" "<<s2<<endl;
    cout << "Size "<< s.size() << endl; ///size
    cout << "Max size " <<s.max_size()<<endl; ///max size
    cout << "Capacity " << s.capacity()<<endl; ///capacity
    // cout << 
    // s.clear(); // clear a function

    cout <<"Empty " << s.empty()<<endl;

    // s.resize(2);  /// resize first 2
    s.resize(4,'*'); /// resize 4 with *
    cout<<s<<endl;

    cout << s.at(2)<<endl; /// at index 2
    cout <<s.front()<<endl; /// first element
    cout << s.back()<<endl; /// last element

     s.append(s2); s+=s2; /// append another string
     s.replace(3,2,"Replaced text"); /// replace text
     s.insert(3," Inserted text "); /// insert text


    
    return 0;
}
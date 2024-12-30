#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // list<int> l;  // ! empty list
    // list<int> l(10); // ! list of size 10
    // list <int> l(10,99); // ! list of size 10 with 99 in each element
    list <int> l ={1,2,4,5,76}; // ! list of size 10 with 99 in each element
   
    list <int>L_2(l); // ! copy constructor
   
    int arr[5]={1,2,3,4,5};
    list <int> l2(arr,arr+5); // ! copy constructor
    
    cout<<"size = "<<l.size()<<endl;

//! clear the list
    // l.clear();  
    // if(l.empty()){ // ! check list is empty or not
    //     cout<<"list is empty"<<endl;
    // }


    // ! print begin
    // cout <<"begin= "<< *l.begin() <<endl;
    for(auto it= l.begin();it!=l.end();it++){ //iterate bcz it have no index
        cout<<*it<<endl;
    }



    // resize the list
    l.resize(15);

    cout<< "print-2";
    for(int val:l){
        cout<<val<<endl;
    }

    return 0;
}
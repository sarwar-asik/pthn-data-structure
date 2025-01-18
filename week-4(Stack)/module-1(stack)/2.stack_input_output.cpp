#include<bits/stdc++.h>
using namespace std;
class myStack{
   public:
     vector<int> v;

     void push(int val){
        v.push_back(val); // ! O(1)
     }

     void pop(){
        v.pop_back(); // ! O(1)
     }

     int top(){
        return  v.back(); /// last element of vector //!O(1)
     }
     int size(){
        return v.size(); // ! O(1)
     }
     
     bool empty(){
      return v.empty(); // ! O(1)
     }
};


int main() {
    // main code here
    myStack stack1;
    int n ;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        stack1.push(x);
    }

    while(!stack1.empty()){
        cout << stack1.top() << endl;
        stack1.pop(); ///! must delete the top element
    }


    return 0;
}
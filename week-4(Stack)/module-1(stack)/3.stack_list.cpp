#include<bits/stdc++.h>
using namespace std;
class myStack{
   public:
     list<int> L;

     void push(int val){
        L.push_back(val); // ! O(1)
     }

     void pop(){
        L.pop_back(); // ! O(1)
     }

     int top(){
        return  L.back(); /// last element of list //!O(1)
     }
     int size(){
        return L.size(); // ! O(1)
     }
     
     bool empty(){
      return L.empty(); // ! O(1)
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
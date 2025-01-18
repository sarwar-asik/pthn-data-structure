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
    
   myStack stack1; //! it is not dynamic model;
   stack1.push(10);
   stack1.push(20);
   stack1.push(30);

   //cout << stack1.top() << endl;

   // stack1.pop();


   // must use it for top and pop on empty 
   if(stack1.empty()==false)cout<<stack1.top()<<endl; //! will not print gurbage value
   // or
   if(!stack1.empty())stack1.pop(); //! will not print gurbage value
    
   // cout << stack1.top() << endl;






   
    return 0;
}
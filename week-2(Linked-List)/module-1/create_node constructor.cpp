#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address
    Node(int val){
      this->val=val;
      this->next=NULL;
    }
};

int main() {
    Node a(10),b(20),c(30);
   

    a.next = &b; //! store address of b in a.next
    b.next =&c;


    // cout << "a="<<a.val << " b=" << b.val << " c="<<c.val<<endl;

   cout <<" a is "<<a.val<< endl;
//    cout << "b= " << (*a.next).val <<endl; //! or
  cout << "b= " << a.next->val <<endl;

  cout <<"C = "<< a.next->next->val<<endl;

    
    return 0;
}
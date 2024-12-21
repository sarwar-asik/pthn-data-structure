#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address

};
int main() {
    Node a,b,c;
    a.val=10;
    b.val=20;
    c.val=30;

    a.next = &b; //! store address of b in a.next
    b.next =&c;
    c.next= NULL;

    // cout << "a="<<a.val << " b=" << b.val << " c="<<c.val<<endl;

   cout <<" a is "<<a.val<< endl;
//    cout << "b= " << (*a.next).val <<endl; //! or
  cout << "b= " << a.next->val <<endl;

  cout <<"C = "<< a.next->next->val<<endl;

    
    return 0;
}
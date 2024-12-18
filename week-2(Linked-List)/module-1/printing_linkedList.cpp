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
    // main code here
    Node*head= new Node(10);
    Node*a = new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;

    // ! raw way-1
    // cout << "head is "<< head->val<<endl;
    // cout << "a is " << head->next->val<<endl;
    // cout << "b is " << head->next->next->val<<endl;
    // cout << "c is " << head->next->next->next->val<<endl;
    // cout 
    
    // ! do not do it bcz it change main head -2
    // while(head!=NULL){
    //     cout << head->val <<endl;
    //     head=head->next;
    // }

    // ! remanded to use temp pointer -3 
    Node*temp=head;
    while(temp!=NULL){
        cout << temp->val <<endl;
        temp=temp->next;
    }

    return 0;
}
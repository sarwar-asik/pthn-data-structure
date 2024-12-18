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

// ! very important the 3 lines
void insert_headFUn(Node * &head,int val){ //!must use & (ref)=> prev video  
    Node* newNode= new Node(val); // created a head box
  newNode->next=head;   ///linked the previous head
  head=newNode;   // update a new head

//   Node* tempNode = new Node(val);
//   tempNode->next=head;
//   head= tempNode;

};
void print_linked_list(Node*head){
  Node*temp= head;
  while(temp!=NULL){
      cout<<temp->val<<endl;
      temp=temp->next;
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
    insert_headFUn(head,100);
      insert_headFUn(head,200);
        insert_headFUn(head,300);
    print_linked_list(head);


    return 0;
}
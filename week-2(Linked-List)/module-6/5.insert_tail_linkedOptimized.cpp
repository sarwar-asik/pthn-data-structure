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

void insert_at_tail(Node* &head, Node* &tail,int val){
  Node *newNode=new Node(val);

  if(head==NULL){
    head=newNode;
    tail = newNode;
    return;
  }
//  Node *temp=head;
//   while(temp->next!=NULL){
//     temp=temp->next;
//   }
//   temp->next=newNode;
tail->next=newNode;
tail=tail->next;
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
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node* tail = new Node(40);

    head->next=a;
    a->next=b;
    b->next= tail;
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,60);
    insert_at_tail(head,tail,70);
    print_linked_list(head);

    // cout<< head->val<<endl;
    return 0; 
}  
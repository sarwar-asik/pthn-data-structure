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

void insert_at_tail(Node* &head,int val){
  Node *newNode=new Node(val);
  Node *temp=head;
  if(head==NULL){
    head=newNode;
    return;
  }
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
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

    head->next=a;
    a->next=b;
    insert_at_tail(head,40);
    insert_at_tail(head,50);
    insert_at_tail(head,60);
    print_linked_list(head);

    cout<< head->val<<endl;
    return 0;
}
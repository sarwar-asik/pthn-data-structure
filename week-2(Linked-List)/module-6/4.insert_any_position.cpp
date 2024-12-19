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


void insert_at_any_pos_func(Node* &head,int pos,int val){
    Node* newNode= new Node(val);
    Node* temp =head;
    for(int i=1; i<pos;i++){  //!O(N)
        temp = temp->next;
    }
    newNode->next=temp->next;
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
    
    Node *head= new Node(10);
    Node *a = new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    // print_linked_list(head);
    insert_at_any_pos_func(head,2,100);
    
    print_linked_list(head);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address
    Node* prev;   // pointer of the previous address
    Node(int val){
      this->val=val;
      this->next=NULL;
      this->prev=NULL;
    }
};
void print_forward(Node* head){
  Node* tmp = head;
  while(tmp!=NULL){
    cout << tmp->val<< " ";
    tmp = tmp->next;
  }
  cout <<endl;
};
void print_backward(Node* tail){
  Node* tmp = tail;
  while(tmp!=NULL){
    cout << tmp->val<< " ";
    tmp = tmp->prev;
  }
  cout <<endl;
};
void insert_head(Node* &head,Node*tail,int val){
  Node* newNode= new Node(val);
  if(head ==NULL){
    head = newNode;
    tail =newNode;
  }
  newNode->next=head;

  head->prev= newNode;
  head = newNode;
}



int main() {
    // main code here
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

   head->next =a;
   a->prev=head;

   a->next=tail;
   tail->prev=a;


insert_head(head,tail,50);
print_forward(head);

print_backward(tail);



   return 0;
} 
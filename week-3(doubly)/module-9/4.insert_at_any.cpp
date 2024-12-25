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
void insert_at_any_pos (Node*&head, int pos,int val){
    Node* NewNode = new Node(val);
    Node* tmp = head;
    for(int i =1; i<pos;i++){
        tmp = tmp->next;
    }
    // cout<< tmp->val<< endl;
    NewNode->next= tmp->next;
    tmp->next->prev = NewNode;
    tmp->next = NewNode;

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


  insert_at_any_pos(head,2,50);
  insert_at_any_pos(head,3,500);
  print_forward(head);


  print_backward(tail);



   return 0;
} 
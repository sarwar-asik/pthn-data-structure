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
  void delete_at_any (Node*&head, int index){
   
    Node* tmp = head;
    for(int i =1; i<index;i++){
        tmp = tmp->next;
    }
   Node *deleteNode = tmp->next;
   tmp->next= tmp->next->next;
   tmp->next->prev= tmp;
   delete deleteNode;


  
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


  delete_at_any(head,1);
  
  // delete_at_head(head,tail);
  print_forward(head);

  print_backward(tail);



   return 0;
} 
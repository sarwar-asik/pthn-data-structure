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


void insert_at_tail (Node*&head, Node* &tail,int val){
  Node* newNode = new Node(val);
  if(head ==NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next= newNode;
  newNode->prev = tail;
  tail = newNode;
}



int main() {
    // main code here
    Node* head =NULL;
    Node* tail =NULL;

    int val;
    while(true){
      cin >> val;
      if(val == -1) {break;};
         insert_at_tail(head,tail,val);
   
    }


  print_forward(head);

  print_backward(tail);



   return 0;
} 
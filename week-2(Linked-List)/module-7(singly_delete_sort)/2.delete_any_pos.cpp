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
void delete_at_any_pos(Node* &head,int idx){ //here do not need reference & bcz won't del head
 Node* tempNode = head;

 for(int i= 1;i<idx;i++){
  tempNode = tempNode->next;  
 }
 Node* deleteNOde= tempNode->next;
 tempNode->next = tempNode->next->next;
 delete deleteNOde; // deleted from memory. bcz node dynamic.
};
int main() {
  
  Node* head= NULL;
  Node* tail= NULL;
  int val;
  while(true){  //! O(N)
    cin>> val;
    if(val ==-1){
        break;
    }
    insert_at_tail(head,tail,val); //!O(1)
  }
  delete_at_any_pos(head,3); //deleted the head
  // delete_at_head(head); 
  print_linked_list(head);

    return 0; 
}  
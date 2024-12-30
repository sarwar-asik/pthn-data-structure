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


void reverse_singly_linked_list(Node* &head,Node* &tail,Node * temp){
    if(temp->next==NULL){
        head = temp;
        return;
    }  
    reverse_singly_linked_list(head,tail,temp->next);  //! recursion
    // cout << temp->val<<" ";
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;

}
void print_linked_list(Node*head){
  Node*temp= head;
  
  while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
  }  
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
//   print_linked_list(head);
reverse_singly_linked_list(head,tail,head);

print_linked_list(head);

cout << endl;
cout << "head is now = "<< head->val<<endl;
cout << "tail is now = "<< tail->val<<endl;



    return 0; 
}  
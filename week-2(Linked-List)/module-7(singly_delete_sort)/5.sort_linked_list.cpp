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
void sort_linked_list(Node* head){
    // for(int i =0;i<n-1;i++){
    //     for(int j =i+1;j<n;j++){
    //        if(a[i]>a[j]){
    //          swap(a[i],a[j]);
    //        }
    //     }
    // }
    for(Node* tempNodei=head; tempNodei->next!=NULL;tempNodei=tempNodei->next){
       for(Node*tempNodej= tempNodei->next;tempNodej!=NULL;tempNodej=tempNodej->next){
        //! ascending sort
        if(tempNodei->val>tempNodej->val){
          swap(tempNodei->val,tempNodej->val);
        }
       }
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

  sort_linked_list(head); //! O(N*N)
  print_linked_list(head);

    return 0; 
}  
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

void print_linked_list(Node*head){
  Node*temp= head;
  while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
  }  
};

void uniqueFunc(Node*head){
  Node* ExistNode =head;
  while(ExistNode!=NULL){
    Node*prevNode = ExistNode;
    Node* tempNode =ExistNode->next;
    while(tempNode!=NULL){
        if(ExistNode->val!=tempNode->val){ // Unique ache so, next 
            prevNode= tempNode;
    tempNode=tempNode->next;
            
        }else{
            prevNode->next=tempNode->next;  // duplicate. so next and delete the current
            
        delete tempNode;

            tempNode=prevNode->next;
        }
    }
    ExistNode=ExistNode->next; /// loop k next korlam

  }  
};
void insert_at_tail (Node * &head,Node*&tail,long long  int val){

        Node * newNode = new Node(val);
        if(head==NULL){
         head= newNode;
         tail = newNode;
         return;
        }
        tail->next=newNode;
        tail = tail->next;

};

int main() {
    // main code here
    Node* head =NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val==-1){
            break;
        }
    insert_at_tail(head,tail,val);

    }
    uniqueFunc(head);
    print_linked_list(head);
    return 0;
}
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
   cout<<"L -> ";
  while(tmp!=NULL){
    cout << tmp->val<< " ";
    tmp = tmp->next;
  }
  cout <<endl;
};
void print_backward(Node* tail){
  Node* tmp = tail;
  cout<<"R -> ";
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
  else{
    newNode->next=head;
    head->prev= newNode;
    head = newNode;
  }
};

void insert_at_tail (Node*&head, Node* &tail,int val){
  Node* newNode = new Node(val);
  if(head ==NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  else{
    tail->next= newNode;
    newNode->prev = tail;
    tail = newNode;
  }
 
};


void insert_at_any_pos (Node*&head, int pos,int val){
    Node* NewNode = new Node(val);
    Node* tmp = head;
    for(int i =1; i<pos;i++){
      // if(tmp->next==NULL){
      //   cout<<"Invalid"<<endl;
      //   return;
      // }
        tmp = tmp->next;
    }
    // cout<< tmp->val<< endl;
    NewNode->next= tmp->next;
    tmp->next->prev = NewNode;
    tmp->next = NewNode;
};
int current_length_of_linked_list(Node*head){
    Node*temp= head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
};
int main() {
    // main code here
    Node* head =NULL;
    Node* tail =NULL;

    int val;
    cin >> val;
    while(val--){
      int X,V;
      cin>> X >> V;
      // cout <<" X " << X <<" V " << V<<endl;
       
      int length = current_length_of_linked_list(head);
      cout<<"length "<<length<<endl;
      if(X==0){
        // cout <<" X " << X <<" V " << V<<endl;
        insert_head(head,tail,V);
        print_forward(head);
        print_backward(head);
      }
      else if(X>length){
        cout<<"Invalid"<<endl;
        // // break;
        // return;
      }
      else if(X == length){
        // tail->next=
        // insert_at_tail(head,tail,V);
        // Node* tempNode =new Node(V);
        // tail->next=tempNode;
        // tempNode->prev = tail;
        // tail = tempNode;
        insert_at_tail(head,tail,V);
        print_forward(head);
        print_backward(head);
      }
      else{
          // insert_at_any_pos(head,X,V);
      //      print_forward(head);
      //  print_backward(head);
      }



     

      
      // insert_at_any_pos(head,X,V);
    }


 


   return 0;
} 
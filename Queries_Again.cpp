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


void print_reverse_function(Node *temp){
  // cout<<"R -> ";
    if(temp==NULL){
        return;
    }  
    print_reverse_function(temp->next);  //! recursion
    cout << temp->val<<" ";
  // cout <<endl;

}
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
      int length = current_length_of_linked_list(head);
      
      // cout<<"length = "<<length;
      if(X==0){
      Node* newNode = new Node(V);
          if(head ==NULL){
          head = newNode;
          tail =newNode;
        }
        else{
          newNode->next=head;
          head->prev= newNode;
          head = newNode;
        }
        print_forward(head);
        // print_backward(tail);
          cout<<"R -> ";
          print_reverse_function(head);
          cout<<endl;
      }
      else if(X>length){
        cout<<"Invalid"<<endl;
      }
      else if(X == length){
        insert_at_tail(head,tail,V);
          print_forward(head);
          // print_backward(tail);
          cout<<"R -> ";
          print_reverse_function(head);
          cout<<endl;

      }
      else{
        Node* NewTempNode = new Node(V);
          Node* tmp = head;
          for(int i =1; i<X;i++){ 
              tmp = tmp->next;  
          }
          // cout<< tmp->val<< endl;
          NewTempNode->next= tmp->next;
          tmp->next->prev = NewTempNode;
          tmp->next = NewTempNode;
           print_forward(head);
           cout<<"R -> ";
          print_reverse_function(head);
          cout<<endl;
      }

    }


   return 0;
} 
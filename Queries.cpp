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
      cout<<temp->val << " ";
      temp=temp->next;
  }  
     cout<<endl;
};
void insert_headFUn(Node * &head,int val){ 
    Node* newNode= new Node(val); // created a head box
  newNode->next=head;   ///linked the previous head
  head=newNode;   // update a new head

//   Node* tempNode = new Node(val);
//   tempNode->next=head;
//   head= tempNode;

};

void delete_at_any_pos(Node* &head,int idx){ //here do not need reference & bcz won't del head
 
 if(idx<0 || head==NULL){
  return;
 }
 if(idx ==0){
  Node* deleteNOde= head;
  head = head->next;
  delete deleteNOde; 
  return;
 }
 Node* tempNode = head;

 for(int i= 0;i<idx-1 && tempNode->next!=NULL;i++){
  tempNode = tempNode->next;  
 }
 if(tempNode->next==NULL){
  return;
 }
 Node* deleteNOde= tempNode->next;
 tempNode->next = tempNode->next->next;
 delete deleteNOde; // deleted from memory. bcz node dynamic.
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
  
  Node* head= NULL;
  Node* tail= NULL;

  int Q;
    cin>>Q;
    while(Q--){
        int X,V;
        cin>>X>>V;
        // cout<<X<<" ||  "<<V <<endl;
        //  insert_headFUn(head,V);
        //! insert head
        if(X==0){
            insert_headFUn(head,V);
            tail=head;
              // print_linked_list(head);
        } 


        //// ! insert tail 
        else if(X==1){

      //  if(V==60){
      //         cout<<"h="<<head->val<<" t="<< tail->val << " issue in => ";
      //          print_linked_list(head);
      //       }
            // cout << "tail = "<<tail->val<<endl;
            
                       insert_at_tail(head,tail,V);

            // print_linked_list(head);
        }

        /// ! delete at index
     else if(X==2){
        //  delete_at_any_pos(head,V);
            int length = current_length_of_linked_list(head);
            if(V>=0 && V<length){
                  delete_at_any_pos(head,V); 
                  ///print_linked_list(head);
              }
        }


        print_linked_list(head);
      
     
        // insert_at_tail(head,tail,val);
    }


    return 0; 
}  
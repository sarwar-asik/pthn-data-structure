#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/palindrome-26-2
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

void reverse_doubly_linked_list(Node* &head, Node* &tail){
    for(Node* i =head,*j =tail;i!=j && i->prev!=j;i=i->next,j=j->prev){
        swap(i->val,j->val);
    }
}

int main() {
    // main code here
    Node* head =NULL;
    Node* tail =NULL;
     Node* tempHead= NULL;
    // Node* tempHead2= head;
    Node* tempTail= NULL;

    int val;
    while(true){
      cin >> val;
      if(val == -1) {break;};
         insert_at_tail(head,tail,val);
         insert_at_tail(tempHead,tempTail,val);
    }

   
    reverse_doubly_linked_list(tempHead,tempTail);
   
//    print_forward(head);
//    print_forward(tempHead);


    int isPal =true;
    while(tempHead!=NULL){
        // cout<<head->val<<" and "<<tempHead->val<<endl;
        if(head->val!=tempHead->val){
            isPal=false;
            break;
        }
        head=head->next;
        tempHead=tempHead->next;
    }

        if(isPal){
          cout<< "YES"<<endl;
        }else{
          cout<< "NO"<<endl;
        }




//   print_forward(tempHead);

//   print_backward(tail);



   return 0;
} 
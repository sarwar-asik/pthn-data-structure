#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node* next;   // pointer of the next address
    Node* prev;   // pointer of the previous address
    Node(string val){
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



void insert_at_tail (Node*&head, Node* &tail,string val){
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

void visit_checker(Node*  head,Node* &tempHead,string addString){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->val==addString){
            tempHead = temp;
            cout<<addString<<endl;
            return;
        }
        temp = temp->next;
    }
    // if(temp==NULL){
    //     insert_at_tail(head,tempHead,addString);
    //     tempHead = head;
    // }
    cout<<"Not Available"<<endl; // not founf the address stlrong
};


int main() {
    // main code here
    Node* head =NULL;
    Node* tail =NULL;

    string val;
    while(true){
      cin >> val;
      if(val == "end") {break;};
         insert_at_tail(head,tail,val);
      }
      //   print_forward(head);
      int Q;
      cin >> Q;
      cin.ignore();
    //   cout<<Q<<endl; 
    Node *tempHead = head;
      while(Q--){
        string cmd;
        // cin >> cmd;
        getline(cin,cmd);
        // cout<<cmd<<endl;
        // if(cmd=="visit phitron"){
        //     Node* newNode = head;
        //     while(head!=NULL){
        // }

        // cout<<cmd.substr(0,6)<<endl;

        if(cmd.substr(0,6)=="visit "){
            string addr = cmd.substr(6);
            visit_checker(head,tempHead,addr);
            
        }else if (cmd =="next"){
            if(tempHead && tempHead->next){
                tempHead = tempHead->next;
                // cout<<"the the next address is "<<tempHead->val<<endl;
                cout<<tempHead->val<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }
        else if (cmd =="prev"){

            if(tempHead && tempHead->prev){
                tempHead = tempHead->prev;
                // cout<<"the the next address is "<<tempHead->val<<endl;
                cout<<tempHead->val<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }

       
      }





//   print_backward(tail);



   return 0;
} 
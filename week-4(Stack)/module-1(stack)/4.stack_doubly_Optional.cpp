


#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address
    Node *prev;   // pointer of the previous address
    Node(int val){
      this->val=val;
      this->next=NULL;
      this->prev=NULL;
    }
};

class myStack
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz =0;
    void push(int val){ //! O(1)
       sz++;
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

    void pop(){ //O(1)

       sz--;
        Node * deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail==NULL){
            head=NULL; 
        }
        tail->next=NULL;
    }

    int top(){
        return tail->val;
    }
    int size() {// ! without  O(N) loop
        return sz;
        } 
    bool empty(){
        return head==NULL;
    }

};

int main() {
    // main code here

    myStack stack1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;  
        stack1.push(x);
    }

    cout << stack1.top() << endl;

   while(!stack1.empty()){
        cout << stack1.top() << endl;
        stack1.pop(); ///! must delete the top element
    }
 

 

    return 0;
}
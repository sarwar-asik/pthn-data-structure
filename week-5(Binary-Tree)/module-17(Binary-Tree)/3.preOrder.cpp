#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;   // pointer of the left address
    Node* right;   // pointer of the right address
    Node(int val){
      this->val=val;
      this->left=NULL;
      this->right=NULL;
    }
};
void preOrder(Node* root){
    if(root==NULL)return; //! a function  return from same line
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
};
// ! pre Order
//    10
//  20  30
// 40 50 60
//! output = 10 20 40 30 50 60  

int main() {
    
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
    Node* e= new Node(60);

    //  first binary
    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;

    preOrder(root);


    return 0;
}
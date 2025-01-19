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
void postOrder(Node* root){
    if(root==NULL)return; //! a function  return from same line
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
};

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

    postOrder(root);



    return 0;
}
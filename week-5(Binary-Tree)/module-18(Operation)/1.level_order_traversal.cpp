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
void levelOrder(Node* root){
    queue<Node*>q;
   
   q.push(root);
    while(!q.empty()){
        Node*f = q.front();
        q.pop();

        cout << f->val << " ";

       if(f->left) q.push(f->left);
       if(f->right) q.push(f->right);
    }
};
// ! Level order traversal
//    10
//  20  30
// 40 50 60
//! output = 10 20 30 40 50 60
int main() {
    // main code here
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

    levelOrder(root);

    return 0;
}